@class NSView, NSString, NSNumber;

@interface SASBookendViewProvider : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_view;
    void /* unknown type, empty encoding */ viewWrapper;
}

@property (nonatomic, retain) NSView *view;
@property (nonatomic, readonly) NSString *currentLanguage;
@property (nonatomic, readonly) NSNumber *totalAnimationDuration;

+ (BOOL)willShowAnimationWithLogo;

- (void)startAnimation;
- (BOOL)isAnimating;
- (void)pauseAnimation;
- (id)init;
- (void)stopAnimation;
- (void).cxx_destruct;
- (void)setBackgroundTextureDataSource:(id)a0;
- (void)advanceToEndOfAnimation;
- (id)animationConstrainingView;
- (id)initWithBookendType:(unsigned long long)a0;
- (id)initWithBookendType:(unsigned long long)a0 callbacks:(id)a1;
- (id)initWithBookendType:(unsigned long long)a0 firstLanguagesToDisplay:(id)a1;
- (id)initWithBookendType:(unsigned long long)a0 firstLanguagesToDisplay:(id)a1 callbacks:(id)a2;
- (id)initWithBookendType:(unsigned long long)a0 onlyShowLanguages:(id)a1;
- (id)initWithBookendType:(unsigned long long)a0 onlyShowLanguages:(id)a1 callbacks:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestRectForAnimation;
- (struct CGImage { } *)layerSnapshot;
- (void)setAnimationConfiguration:(id)a0;
- (void)setBackgroundData:(id)a0;
- (void)setBackgroundTexture:(id)a0;
- (void)setCallbackConfiguration:(id)a0;
- (void)shouldRenderBackgroundTexture:(BOOL)a0;
- (void)updateLanguages:(id)a0;
- (BOOL)willAnimateWithLogo;

@end
