@class NSError;

@interface PRETrialCompletionResult : NSObject

@property (nonatomic) char isCompletionCalled;
@property (nonatomic) char isSuccess;
@property (retain, nonatomic) NSError *downloadError;

- (void).cxx_destruct;

@end
