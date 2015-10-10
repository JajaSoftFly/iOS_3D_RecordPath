//
//  MAMutablePolylineView.h
//  test3D
//
//  Created by xiaoming han on 15/7/15.
//  Copyright (c) 2015年 AutoNavi. All rights reserved.
//

#import <MAMapKit/MAOverlayPathView.h>
#import "MAMutablePolyline.h"

@interface MAMutablePolylineView : MAOverlayPathView

@property (nonatomic, readonly) MAMutablePolyline *mutablePolyline;

- (instancetype)initWithMutablePolyline:(MAMutablePolyline *)polyline;

@end
