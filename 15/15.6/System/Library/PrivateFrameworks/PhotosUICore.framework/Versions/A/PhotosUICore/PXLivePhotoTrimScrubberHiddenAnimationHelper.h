@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject {
    long long _hideRequestCounter;
}

@property (readonly, copy, nonatomic) id /* block */ animationBlock;
@property (nonatomic) char hidden;

- (void).cxx_destruct;
- (void)setHidden:(char)a0 animated:(char)a1;
- (void)_setHidden:(char)a0 animated:(char)a1 afterDelay:(double)a2;
- (void)_setHidden:(char)a0 animated:(char)a1 withRequstID:(long long)a2;
- (id)initWithAnimationBlock:(id /* block */)a0;

@end
