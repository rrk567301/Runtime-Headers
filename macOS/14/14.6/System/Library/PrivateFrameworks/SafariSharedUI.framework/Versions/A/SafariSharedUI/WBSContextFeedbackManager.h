@interface WBSContextFeedbackManager : NSObject

+ (void)sendFeedbackForURL:(id)a0 withComment:(id)a1 topicsToGradesMap:(id)a2 categoriesToGradesMap:(id)a3 isReaderAvailable:(BOOL)a4 completionHandler:(id /* block */)a5;

@end
