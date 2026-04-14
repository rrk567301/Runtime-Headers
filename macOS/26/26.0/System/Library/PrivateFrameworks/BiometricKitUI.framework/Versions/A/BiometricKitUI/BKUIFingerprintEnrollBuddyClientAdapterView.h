@class OBTemplateView;

@interface BKUIFingerprintEnrollBuddyClientAdapterView : OBTemplateView

@property (retain, nonatomic) OBTemplateView *hostedView;

- (id)bodyText;
- (id)title;
- (void)setHeadline:(id)a0;
- (void)setTitle:(id)a0;
- (long long)layoutStyle;
- (id)headline;
- (void)setBodyText:(id)a0;
- (void).cxx_destruct;
- (id)contentArea;
- (id)linkButton;
- (long long)bodyTextAlignment;
- (BOOL)needsExtraWideContent;
- (void)setTopImageTintColor:(id)a0;
- (id)topContent;

@end
