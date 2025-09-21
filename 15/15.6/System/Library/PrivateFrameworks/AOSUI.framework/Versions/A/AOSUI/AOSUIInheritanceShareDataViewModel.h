@class NSString;

@interface AOSUIInheritanceShareDataViewModel : AOSUIAccountContactBaseViewModel {
    char _shouldEnableFirstButtonOnLoad;
    char _shouldShowHelpLinkAsTemplateButton;
    NSString *_imageName;
    long long _templateContentViewLayout;
}

- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)a0;
- (id)initWithModel:(id)a0;
- (void)setTemplateContentViewLayout:(long long)a0;
- (char)shouldEnableFirstButtonOnLoad;
- (char)shouldShowHelpLinkAsTemplateButton;
- (long long)templateContentViewLayout;

@end
