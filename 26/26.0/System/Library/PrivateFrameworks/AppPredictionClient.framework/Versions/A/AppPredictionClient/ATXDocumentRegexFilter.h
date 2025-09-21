@interface ATXDocumentRegexFilter : ATXRegexFilter

+ (id)sharedInstance;

- (id)init;
- (BOOL)shouldFilterOutBundleId:(id)a0 andURL:(id)a1;
- (BOOL)shouldFilterOutURL:(id)a0;

@end
