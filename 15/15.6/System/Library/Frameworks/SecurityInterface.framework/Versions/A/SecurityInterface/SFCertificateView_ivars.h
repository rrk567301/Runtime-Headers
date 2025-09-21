@class NSTextField, NSView, NSArray, NSGridView, SFCertificateData, NSPopUpButton, NSMutableArray, NSStackView, NSImageView, NSButton, NSImage;

@interface SFCertificateView_ivars : NSObject {
    SFCertificateData *_certData;
    NSImageView *_certImage;
    NSTextField *_titleText;
    NSTextField *_issuerText;
    NSTextField *_dateText;
    NSTextField *_statusText;
    NSButton *_detailsButton;
    NSTextField *_detailsLabel;
    NSView *_detailsContainer;
    NSTextField *_popupLabel;
    NSTextField *_popupText;
    NSPopUpButton *_popupButton;
    NSButton *_helpButton;
    NSButton *_disclosureButton;
    NSTextField *_disclosureLabel;
    NSView *_policyContainer;
    NSMutableArray *_policyLabels;
    NSMutableArray *_policyValues;
    NSMutableArray *_policyPopUps;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_plrects;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_pvrects;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_pprects;
    NSGridView *_trustGrid;
    NSGridView *_detailsGrid;
    NSStackView *_outerStack;
    int _extDividerIndex;
    int _minBoundsHeight;
    int _minVisibleHeight;
    int _detailsMinHeight;
    int _policiesMinHeight;
    int _summaryStackHeight;
    char _trustNotSet;
    char _uniformTrust;
    char _editableTrust;
    char _policiesDisplayed;
    char _policiesDisclosed;
    char _detailsDisplayed;
    char _detailsDisclosed;
    char _certPathDisplayed;
    char _certPathDisclosed;
    NSMutableArray *_labels;
    NSMutableArray *_fields;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_lrects;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_frects;
    NSImage *_dragImage;
    NSArray *_policies;
    struct __SecTrust { } *_trust;
    char _rebuildTrust;
    unsigned int _domain;
}

- (void)dealloc;

@end
