@class _TtC14FeedbackLoggerP33_CDF37950FCCA12A7A9834AFB22C1AC3415FBFXPCConnector;

@interface FeedbackLoggerFBFClient : NSObject

@property (nonatomic, readonly) _TtC14FeedbackLoggerP33_CDF37950FCCA12A7A9834AFB22C1AC3415FBFXPCConnector *xpcConnector;

- (id)init;
- (void).cxx_destruct;
- (void)requestSandboxExtensionForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)scheduleImmediateUploadWithHeaders:(id)a0 completion:(id /* block */)a1;

@end
