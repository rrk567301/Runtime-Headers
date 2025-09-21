@class NSString, NSXPCListenerEndpoint;

@interface LNConnectionListenerEndpoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *processInstanceIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProcessInstanceIdentifier:(id)a0 bundleIdentifier:(id)a1 xpcListenerEndpoint:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3;

@end
