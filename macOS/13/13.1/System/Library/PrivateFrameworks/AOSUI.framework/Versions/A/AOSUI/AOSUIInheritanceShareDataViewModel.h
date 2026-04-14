@class NSString;

@interface AOSUIInheritanceShareDataViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldEnableFirstButtonOnLoad;
    BOOL _shouldShowHelpLinkAsTemplateButton;
    NSString *_imageName;
    long long _templateContentViewLayout;
}

- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)a0;
- (id)initWithModel:(id)a0;
- (long long)templateContentViewLayout;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (BOOL)shouldShowHelpLinkAsTemplateButton;

@end
