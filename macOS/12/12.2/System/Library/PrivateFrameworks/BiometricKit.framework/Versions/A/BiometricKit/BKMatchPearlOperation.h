@class BKIdentity;
@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation

@property (weak, nonatomic) id<BKMatchPearlOperationDelegate> delegate;
@property (nonatomic) BOOL longTimeout;
@property (nonatomic) BOOL shouldAutoRetry;
@property (nonatomic) BOOL preAugmentationCheck;
@property (retain, nonatomic) BKIdentity *preAugmentationCheckIdentity;

- (void).cxx_destruct;
- (BOOL)startNewMatchAttemptWithError:(id *)a0;
- (BOOL)enableAutoRetry:(BOOL)a0 error:(id *)a1;
- (BOOL)pauseFaceDetectTimer:(BOOL)a0 error:(id *)a1;

@end
