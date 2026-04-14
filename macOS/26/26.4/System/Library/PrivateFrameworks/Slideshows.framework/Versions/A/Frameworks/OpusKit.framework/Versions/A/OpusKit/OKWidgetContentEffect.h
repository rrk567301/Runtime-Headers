@class NSString, OFNSView, CAAnimation;

@interface OKWidgetContentEffect : NSObject <OKSettingsSupport> {
    NSString *_uuid;
    BOOL _isPaused;
    double _animationStartTime;
}

@property (nonatomic) OFNSView *animatedView;
@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL autoplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationKeyPrefix;
+ (id)supportedSettings;

- (void)pauseAnimation;
- (BOOL)isAnimating;
- (id)settingObjectForKey:(id)a0;
- (void)stopAnimation;
- (void)resumeAnimation;
- (id)initWithSettings:(id)a0;
- (double)animationDuration;
- (id)init;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (double)animationBeginTime;
- (double)animationCurrentTime;
- (void)startAnimationWithView:(id)a0;

@end
