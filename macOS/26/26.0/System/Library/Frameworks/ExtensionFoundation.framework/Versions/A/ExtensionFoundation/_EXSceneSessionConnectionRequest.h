@class NSUUID, _EXSceneSessionParameters, NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *identifier;
@property (retain) NSXPCListenerEndpoint *hostEndpoint;
@property BOOL catalystHosted;
@property (retain) _EXSceneSessionParameters *parameters;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
