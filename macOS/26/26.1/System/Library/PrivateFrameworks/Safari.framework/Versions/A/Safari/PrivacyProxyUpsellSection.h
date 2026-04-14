@class NSButton, NSTrackingArea;

@interface PrivacyProxyUpsellSection : PrivacyProxyStatusSection {
    NSButton *_dismissButton;
    NSTrackingArea *_trackingArea;
}

- (void)_updateSubviews;
- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void).cxx_destruct;
- (void)_initSubviews;
- (id)init;
- (void)viewWillDraw;
- (void)_attachSubviews;
- (void)_dismissUpsell;
- (void)_openLearnMoreLink;

@end
