@interface _PSCNAutocompleteFeedbackProcessingTask : NSObject

+ (void)runOverImplicit;
+ (void)runOverExplicit;
+ (id)bookmarkFileNameForImplicit:(char)a0;
+ (id)bundleIDsToProcess;
+ (id)loadBookmarkTimeOverImplicit:(char)a0 from:(id)a1;
+ (void)persistBookmarkTime:(id)a0 overImplicit:(char)a1 to:(id)a2;
+ (void)runWithInferredEnterAndExit:(char)a0 overImplicit:(char)a1 eventFilter:(id /* block */)a2;
+ (id)sourceBundleIDsToIgnore;

- (void)execute;

@end
