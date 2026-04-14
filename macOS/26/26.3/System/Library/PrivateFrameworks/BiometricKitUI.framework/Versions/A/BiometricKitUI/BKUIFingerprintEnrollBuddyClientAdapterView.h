@class OBTemplateView;

@interface BKUIFingerprintEnrollBuddyClientAdapterView : OBTemplateView

@property (retain, nonatomic) OBTemplateView *hostedView;

- (id)headline;
- (id)bodyText;
- (void)setBodyText:(id)a0;
- (void)setHeadline:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (long long)layoutStyle;
- (void)setTitle:(id)a0;
- (id)contentArea;
- (id)linkButton;
- (long long)bodyTextAlignment;
- (BOOL)needsExtraWideContent;
- (void)setTopImageTintColor:(id)a0;
- (id)topContent;

@end
