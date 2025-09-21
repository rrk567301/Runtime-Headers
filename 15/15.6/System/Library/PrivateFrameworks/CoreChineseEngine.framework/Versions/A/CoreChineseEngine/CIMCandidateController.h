@interface CIMCandidateController : IMKCandidates

@property (nonatomic) char showCandidatesAtEndOfCompletion;
@property (readonly, nonatomic) char shouldClose;

- (void)hide;
- (char)isVisible;
- (void)show:(unsigned long long)a0;
- (void)deferredHide;

@end
