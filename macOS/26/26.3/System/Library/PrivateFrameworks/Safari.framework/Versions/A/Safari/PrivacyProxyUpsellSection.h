@class NSButton, NSTrackingArea;

@interface PrivacyProxyUpsellSection : PrivacyProxyStatusSection {
    NSButton *_dismissButton;
    NSTrackingArea *_trackingArea;
}

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (id)init;
- (void)_initSubviews;
- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)viewWillDraw;
- (void)_attachSubviews;
- (void)_dismissUpsell;
- (void)_openLearnMoreLink;

@end
