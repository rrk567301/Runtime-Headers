@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (id)init;
- (void).cxx_destruct;
- (id)target;
- (void)setTarget:(id)a0;
- (long long)volume;
- (void)setVolume:(long long)a0;
- (void)setIsMuted:(BOOL)a0;
- (BOOL)isMuted;
- (BOOL)isShowWhenStopped;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (long long)numberOfSlides;
- (void)setNumberOfSlides:(long long)a0;

@end
