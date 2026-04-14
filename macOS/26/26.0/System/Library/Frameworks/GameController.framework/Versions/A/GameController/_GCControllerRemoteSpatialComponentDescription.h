@class NSString, _GCControllerRemoteSpatialComponent, _GCDeviceSpatialParameters;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCControllerRemoteSpatialComponentDescription : NSObject <_GCControllerComponentDescription> {
    _GCControllerRemoteSpatialComponent *_materializedComponent;
    _GCDeviceSpatialParameters *_facade;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createWithContext:(id)a0;
- (id)initWithIdentifier:(id)a0 facade:(id)a1;
- (id)materializeWithContext:(id)a0;

@end
