@class NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSXPCListenerEndpoint *viewBridgeEndpoint;
@property (retain) NSXPCListenerEndpoint *sceneEndpoint;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
