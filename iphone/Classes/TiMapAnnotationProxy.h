/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiBase.h"

#ifdef USE_TI_MAP

#import "TiViewProxy.h"
#import <MapKit/MapKit.h>

@class TiMapViewProxy;

@interface TiMapAnnotationProxy : TiViewProxy<MKAnnotation, TiProxyObserver> {
@private
	int tag;
	TiMapViewProxy *delegate;
	BOOL needsRefreshing;
	BOOL needsRefreshingWithSelection;
	BOOL placed;
	CGPoint offset;
}

// Center latitude and longitude of the annotion view.
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readwrite, assign) TiMapViewProxy *delegate;
@property (nonatomic,readonly)	BOOL needsRefreshingWithSelection;
@property (nonatomic, readwrite, assign) BOOL placed;
@property (nonatomic, readonly) CGPoint offset;

// Title and subtitle for use by selection UI.
- (NSString *)title;
- (NSString *)subtitle;

- (MKPinAnnotationColor)pinColor;
- (BOOL)animatesDrop;

- (UIView*)leftViewAccessory;
- (UIView*)rightViewAccessory;

- (int)tag;

@end

#endif