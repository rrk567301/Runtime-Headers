@class NSButton, NSTrackingArea;

@interface PrivacyProxyUpsellSection : PrivacyProxyStatusSection {
    NSButton *_dismissButton;
    NSTrackingArea *_trackingArea;
}

- (id)init;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewWillDraw;
- (void)_updateSubviews;
- (void)_initSubviews;
- (void)_attachSubviews;
- (void)_dismissUpsell;
- (void)_openLearnMoreLink;

@end
