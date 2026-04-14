@class NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSXPCListenerEndpoint *viewBridgeEndpoint;
@property (retain) NSXPCListenerEndpoint *sceneEndpoint;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
