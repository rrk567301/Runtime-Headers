@class NSString;
@protocol GCDeviceSpatial, NSSecureCoding, NSCopying, NSObject;

@interface _GCControllerRemoteSpatialComponent : _GCDeviceSpatialComponent <_GCControllerSpatialComponent, GCControllerComponent>

@property (readonly) id<GCDeviceSpatial> spatialFacade;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setController:(id)a0;

@end
