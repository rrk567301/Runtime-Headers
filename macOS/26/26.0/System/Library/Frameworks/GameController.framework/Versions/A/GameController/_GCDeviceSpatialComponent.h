@class NSString, _GCDeviceSpatial;
@protocol GCDeviceSpatial, NSSecureCoding, NSCopying, NSObject;

@interface _GCDeviceSpatialComponent : NSObject <_GCDeviceSpatialComponent> {
    _GCDeviceSpatial *_facade;
}

@property (readonly) id<GCDeviceSpatial> spatialFacade;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
