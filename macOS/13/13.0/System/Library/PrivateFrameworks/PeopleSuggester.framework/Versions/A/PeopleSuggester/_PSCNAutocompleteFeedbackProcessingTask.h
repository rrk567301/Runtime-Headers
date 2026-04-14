@interface _PSCNAutocompleteFeedbackProcessingTask : NSObject

+ (id)bundleIDsToProcess;
+ (id)sourceBundleIDsToIgnore;
+ (id)bookmarkFileNameForImplicit:(BOOL)a0;
+ (void)persistBookmarkTime:(id)a0 overImplicit:(BOOL)a1 to:(id)a2;
+ (id)loadBookmarkTimeOverImplicit:(BOOL)a0 from:(id)a1;
+ (void)runWithInferredEnterAndExit:(BOOL)a0 overImplicit:(BOOL)a1 eventFilter:(id /* block */)a2;
+ (void)runOverExplicit;
+ (void)runOverImplicit;

- (void)execute;

@end
