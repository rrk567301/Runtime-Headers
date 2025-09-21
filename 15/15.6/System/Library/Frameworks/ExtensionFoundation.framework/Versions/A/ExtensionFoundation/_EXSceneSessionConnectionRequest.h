@class NSUUID, _EXSceneSessionParameters, NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSUUID *identifier;
@property (retain) NSXPCListenerEndpoint *hostEndpoint;
@property char catalystHosted;
@property (retain) _EXSceneSessionParameters *parameters;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
