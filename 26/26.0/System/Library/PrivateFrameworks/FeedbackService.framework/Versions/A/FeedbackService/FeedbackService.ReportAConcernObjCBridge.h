@interface FeedbackService.ReportAConcernObjCBridge : NSObject

+ (void)evaluateWithInteraction:(id)a0 action:(long long)a1 showFeedbackForm:(BOOL)a2 associateWithAppleAccount:(BOOL)a3 sceneID:(id)a4 presentingBundleId:(id)a5 completion:(id /* block */)a6;
+ (void)presentedWithInteraction:(id)a0 completion:(id /* block */)a1;

- (id)init;

@end
