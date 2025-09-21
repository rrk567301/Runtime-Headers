@class NSString, NSXPCListenerEndpoint;

@interface LNConnectionActionResponse : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCListenerEndpoint:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
