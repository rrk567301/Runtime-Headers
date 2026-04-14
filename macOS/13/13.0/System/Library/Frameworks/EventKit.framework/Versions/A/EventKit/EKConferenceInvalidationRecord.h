@class NSURL, NSMutableSet, NSMutableArray;

@interface EKConferenceInvalidationRecord : NSObject

@property (retain, nonatomic) NSURL *validURL;
@property (retain, nonatomic) NSMutableSet *replacementForURLs;
@property (retain, nonatomic) NSMutableArray *waitingCompletionHandlers;

- (void).cxx_destruct;
- (void)generateNewValidURLForOriginalURL:(id)a0;
- (void)finishWithURL:(id)a0 error:(id)a1;

@end
