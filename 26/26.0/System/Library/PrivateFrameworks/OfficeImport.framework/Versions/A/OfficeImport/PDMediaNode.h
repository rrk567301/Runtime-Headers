@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (void)setVolume:(long long)a0;
- (id)init;
- (id)target;
- (long long)volume;
- (BOOL)isMuted;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (void)setIsMuted:(BOOL)a0;
- (BOOL)isShowWhenStopped;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (void)setNumberOfSlides:(long long)a0;

@end
