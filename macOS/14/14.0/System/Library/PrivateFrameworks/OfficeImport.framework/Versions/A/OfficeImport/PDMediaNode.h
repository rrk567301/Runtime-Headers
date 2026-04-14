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
- (void)setTarget:(id)a0;
- (id)target;
- (long long)volume;
- (BOOL)isMuted;
- (void)setVolume:(long long)a0;
- (void)setIsMuted:(BOOL)a0;
- (BOOL)isShowWhenStopped;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (void)setNumberOfSlides:(long long)a0;

@end
