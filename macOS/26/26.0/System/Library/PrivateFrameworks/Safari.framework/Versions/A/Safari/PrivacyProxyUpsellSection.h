@class NSButton, NSTrackingArea;

@interface PrivacyProxyUpsellSection : PrivacyProxyStatusSection {
    NSButton *_dismissButton;
    NSTrackingArea *_trackingArea;
}

- (id)init;
- (void)_initSubviews;
- (void)_updateSubviews;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)viewWillDraw;
- (void)_attachSubviews;
- (void)_dismissUpsell;
- (void)_openLearnMoreLink;

@end
