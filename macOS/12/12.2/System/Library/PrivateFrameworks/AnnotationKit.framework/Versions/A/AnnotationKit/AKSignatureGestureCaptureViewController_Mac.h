@class NSTextField, NSView, AKController, AKSignatureDescriptionViewController_Mac, NSString, CABasicAnimation, AKSignatureView, NSButton, NSResponder, NSSegmentedControl;

@interface AKSignatureGestureCaptureViewController_Mac : NSViewController <AKSignatureDescriptionDelegate> {
    struct CGPoint { double x; double y; } _savedCursorPosition;
    unsigned long long _viewMode;
    CABasicAnimation *_recordAnimation;
    BOOL _hasDisplayedFirstInstructions;
    NSResponder *_previousFirstResponder;
    NSString *_signatureDescription;
}

@property (retain) NSButton *cancelButton;
@property (retain) NSButton *clearButton;
@property (retain) NSButton *doneButton;
@property (retain) NSSegmentedControl *startSigningSegmentedControl;
@property (retain) NSTextField *topInstructionsTextField;
@property (retain) NSTextField *bottomInstructionsTextField;
@property (retain) NSView *trackpadContainerView;
@property (retain) AKSignatureDescriptionViewController_Mac *signatureDescriptionViewController;
@property BOOL isCursorHidden;
@property BOOL isInTrackpadInputMode;
@property (retain) AKSignatureView *signatureView;
@property (copy) id /* block */ actionBlock;
@property (copy) id /* block */ appearanceBlock;
@property (weak) AKController *controller;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)keyDown:(id)a0;
- (void)clear:(id)a0;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)done:(id)a0;
- (void)setCurrentSignatureDescription:(id)a0;
- (void)descriptionViewController:(id)a0 willHide:(BOOL)a1;
- (void)_setViewMode:(unsigned long long)a0;
- (void)stopTrackpadInput;
- (void)_pauseSigning;
- (void)_setSignatureAreaShowsRecordingIndicator:(BOOL)a0;
- (void)_setupForTrackpadInput;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 inViewToQuartzScreenSpace:(id)a1;
- (void)_setCursorAssociated:(BOOL)a0;
- (void)resumeSigning:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointInView:(id)a0 withNormalizedDevicePosition:(struct CGPoint { double x0; double x1; })a1;

@end
