@class NSView;
@protocol AAOBBulletedWelcomeControllerModelProtocol;

@interface AOSUIAccountContactSplashScreenViewModel : AOSUIAccountContactBaseViewModel {
    id<AAOBBulletedWelcomeControllerModelProtocol> _model;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

- (void)setContentView:(id)a0;
- (id)initWithModel:(id)a0;
- (id)contentView;
- (void).cxx_destruct;
- (id)_setupOBTemplatePartBulletList;
- (void)setTemplateContentViewLayout:(long long)a0;
- (long long)templateContentViewLayout;

@end
