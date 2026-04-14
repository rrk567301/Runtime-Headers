@interface SVSTranscriptAnimationQueue : AFQueue

- (void)enqueueAnimation:(id)a0;
- (void)enqueueAnimations:(id)a0;
- (id)nextAnimation;
- (id)dequeNextAnimation;
- (id)dequeueAllAnimations;
- (id)nextAnimationForTranscriptItem:(id)a0;

@end
