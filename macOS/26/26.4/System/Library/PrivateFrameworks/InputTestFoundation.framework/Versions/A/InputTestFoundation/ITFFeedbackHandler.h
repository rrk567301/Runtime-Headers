@interface ITFFeedbackHandler : NSObject

+ (void)handleWritingToolsComposeResponse:(id)a0 range:(id)a1 forApplicationBundleIdentifier:(id)a2 error:(id)a3 isFinished:(BOOL)a4;
+ (void)handleWritingToolsRewriteResponse:(id)a0 forApplicationBundleIdentifier:(id)a1 error:(id)a2 isFinished:(BOOL)a3;

- (id)init;

@end
