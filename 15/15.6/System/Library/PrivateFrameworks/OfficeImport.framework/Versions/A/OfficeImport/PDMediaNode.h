@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    char mIsMuted;
    char mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (id)init;
- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)target;
- (char)isMuted;
- (void)setVolume:(long long)a0;
- (long long)volume;
- (void)setIsMuted:(char)a0;
- (char)isShowWhenStopped;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(char)a0;
- (void)setNumberOfSlides:(long long)a0;

@end
