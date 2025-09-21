@class NSString, GCMotionXPCProxyClientEndpoint;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCMotionXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    char _initialSensorsActive;
    GCMotionXPCProxyClientEndpoint *_materializedObject;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 initialSensorsActive:(char)a1;
- (id)materializeWithContext:(id)a0;

@end
