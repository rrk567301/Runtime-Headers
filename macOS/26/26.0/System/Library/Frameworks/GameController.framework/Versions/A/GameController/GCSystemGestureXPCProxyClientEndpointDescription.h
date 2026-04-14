@class NSString, GCSystemGestureXPCProxyClientEndpoint;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCSystemGestureXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    GCSystemGestureXPCProxyClientEndpoint *_materializedObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)materializeWithContext:(id)a0;

@end
