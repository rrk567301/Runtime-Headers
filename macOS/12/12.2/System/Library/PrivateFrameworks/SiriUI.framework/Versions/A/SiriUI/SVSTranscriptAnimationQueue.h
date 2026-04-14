@interface SVSTranscriptAnimationQueue : AFQueue

- (id)dequeueAllAnimations;
- (void)enqueueAnimation:(id)a0;
- (id)nextAnimationForTranscriptItem:(id)a0;
- (id)nextAnimation;
- (id)dequeNextAnimation;
- (void)enqueueAnimations:(id)a0;

@end
