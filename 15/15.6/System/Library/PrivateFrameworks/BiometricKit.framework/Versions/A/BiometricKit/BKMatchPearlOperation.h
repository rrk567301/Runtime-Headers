@class BKIdentity;
@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation

@property (weak, nonatomic) id<BKMatchPearlOperationDelegate> delegate;
@property (nonatomic) char longTimeout;
@property (nonatomic) char shouldAutoRetry;
@property (nonatomic) char preAugmentationCheck;
@property (retain, nonatomic) BKIdentity *preAugmentationCheckIdentity;
@property (nonatomic) char fullFaceOnly;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) char nonDelayedIndicator;

- (void).cxx_destruct;
- (char)enableAutoRetry:(char)a0 error:(id *)a1;
- (char)pauseFaceDetectTimer:(char)a0 error:(id *)a1;
- (char)startNewMatchAttemptWithError:(id *)a0;

@end
