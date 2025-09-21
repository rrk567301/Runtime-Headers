@class NSString, GCGameIntentXPCProxyClientEndpoint;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCGameIntentXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    GCGameIntentXPCProxyClientEndpoint *_materializedObject;
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
- (id)initWithIdentifier:(id)a0;
- (id)materializeWithContext:(id)a0;

@end
