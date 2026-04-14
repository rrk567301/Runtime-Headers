@class NSView;
@protocol AAOBBulletedWelcomeControllerModelProtocol;

@interface AOSUIAccountContactSplashScreenViewModel : AOSUIAccountContactBaseViewModel {
    id<AAOBBulletedWelcomeControllerModelProtocol> _model;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)a0;
- (id)initWithModel:(id)a0;
- (long long)templateContentViewLayout;
- (void)setTemplateContentViewLayout:(long long)a0;
- (id)_setupOBTemplatePartBulletList;

@end
