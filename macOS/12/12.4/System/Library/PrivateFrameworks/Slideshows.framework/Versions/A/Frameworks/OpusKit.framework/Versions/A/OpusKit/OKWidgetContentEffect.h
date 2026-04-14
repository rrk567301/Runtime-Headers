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

+ (id)supportedSettings;
+ (id)animationKeyPrefix;

- (void)dealloc;
- (id)init;
- (BOOL)isAnimating;
- (void)stopAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (double)animationDuration;
- (id)initWithSettings:(id)a0;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (double)animationBeginTime;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)startAnimationWithView:(id)a0;
- (double)animationCurrentTime;

@end
