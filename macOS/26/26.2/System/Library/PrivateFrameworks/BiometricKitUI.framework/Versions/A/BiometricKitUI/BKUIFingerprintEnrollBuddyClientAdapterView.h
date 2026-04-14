@class OBTemplateView;

@interface BKUIFingerprintEnrollBuddyClientAdapterView : OBTemplateView

@property (retain, nonatomic) OBTemplateView *hostedView;

- (id)headline;
- (id)title;
- (id)bodyText;
- (long long)layoutStyle;
- (void)setBodyText:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setHeadline:(id)a0;
- (id)contentArea;
- (id)linkButton;
- (long long)bodyTextAlignment;
- (BOOL)needsExtraWideContent;
- (void)setTopImageTintColor:(id)a0;
- (id)topContent;

@end
