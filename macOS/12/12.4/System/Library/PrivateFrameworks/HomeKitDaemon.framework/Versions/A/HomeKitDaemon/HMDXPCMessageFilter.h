@class HMDXPCClientConnection;

@interface HMDXPCMessageFilter : HMFMessageFilter

@property (readonly) HMDXPCClientConnection *connection;

+ (BOOL)canInitWithMessage:(id)a0;
+ (id)policyClasses;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
