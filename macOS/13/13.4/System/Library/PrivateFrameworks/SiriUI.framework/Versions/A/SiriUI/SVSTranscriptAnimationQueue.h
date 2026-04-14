@interface SVSTranscriptAnimationQueue : AFQueue

- (id)nextAnimationForTranscriptItem:(id)a0;
- (id)dequeNextAnimation;
- (id)dequeueAllAnimations;
- (void)enqueueAnimation:(id)a0;
- (void)enqueueAnimations:(id)a0;
- (id)nextAnimation;

@end
