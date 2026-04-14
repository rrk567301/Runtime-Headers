@class OBTemplateView;

@interface BKUIFingerprintEnrollBuddyClientAdapterView : OBTemplateView

@property (retain, nonatomic) OBTemplateView *hostedView;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setHeadline:(id)a0;
- (id)headline;
- (long long)layoutStyle;
- (id)bodyText;
- (void)setBodyText:(id)a0;
- (id)linkButton;
- (id)contentArea;
- (long long)bodyTextAlignment;
- (void)setTopImageTintColor:(id)a0;
- (id)topContent;
- (BOOL)needsExtraWideContent;

@end
