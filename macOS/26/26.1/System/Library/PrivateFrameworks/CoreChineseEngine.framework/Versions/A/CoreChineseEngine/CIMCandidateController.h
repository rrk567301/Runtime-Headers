@interface CIMCandidateController : IMKCandidates

@property (nonatomic) BOOL showCandidatesAtEndOfCompletion;
@property (readonly, nonatomic) BOOL shouldClose;

- (BOOL)isVisible;
- (void)hide;
- (void)show:(unsigned long long)a0;
- (void)deferredHide;

@end
