@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (BOOL)isMuted;
- (long long)volume;
- (void)setVolume:(long long)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)target;
- (void)setIsMuted:(BOOL)a0;
- (BOOL)isShowWhenStopped;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (void)setNumberOfSlides:(long long)a0;

@end
