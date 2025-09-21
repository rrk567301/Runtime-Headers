@class BKIdentity;
@protocol BKEnrollPearlOperationDelegate;

@interface BKEnrollPearlOperation : BKEnrollOperation

@property (weak, nonatomic) id<BKEnrollPearlOperationDelegate> delegate;
@property (nonatomic) long long enrollmentType;
@property (nonatomic) char clientToComplete;
@property (retain, nonatomic) BKIdentity *augmentedIdentity;
@property (nonatomic) long long periocularGlassesRequirement;

- (void).cxx_destruct;
- (char)completeWithError:(id *)a0;
- (char)suspendWithError:(id *)a0;
- (char)resumeWithError:(id *)a0;

@end
