@class NSControl, NSString, NSImage, NSCorrectionPanel, NSBox, NSButton, NSCorrectionTextFieldContainer;

@interface NSCorrectionTextView : NSView {
    NSCorrectionTextFieldContainer *correctionTextFieldContainer;
    BOOL mouseDown;
    NSControl *controlWithMouseDownEvent;
    NSImage *dismissButtonImage;
    struct CGPoint { double x; double y; } textOrigin;
    NSButton *dismissButton;
    NSButton *auxiliaryButton;
    NSBox *buttonSeparator;
    NSBox *buttonToTextFieldSeparator;
}

@property (readonly) NSString *correction;
@property (readonly) BOOL hasSelection;
@property BOOL useDefaultStringAttributes;
@property (readonly) unsigned long long dismissButtonLocation;
@property NSCorrectionPanel *correctionPanel;
@property (readonly) long long correctionPanelType;
@property long long correctionPanelSourceType;
@property (nonatomic) id /* block */ auxiliaryButtonHandler;

- (BOOL)hasSelection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityElements;
- (id)correction;
- (BOOL)_auxiliaryButtonContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_auxiliaryButtonIsPressed;
- (void)_auxiliaryButtonIsPressedWithEvent:(id)a0;
- (void)_dismissButtonIsPressed;
- (void)_dismissButtonIsPressedWithEvent:(id)a0;
- (double)_extraWidthForViewHeight:(double)a0;
- (void)_layoutAuxiliaryButtonAndSeparators;
- (void)_setButtonImage:(id)a0;
- (void)_updateFrame;
- (void)addAuxiliaryButtonWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)drawImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleLeftMouseEvent:(id)a0;
- (void)handleMouseDown:(id)a0;
- (void)handleMouseUp:(id)a0;
- (void)removeAuxiliaryButton;
- (BOOL)selectNextCandidate;
- (BOOL)selectPreviousCandidate;
- (void)setCandidates:(id)a0 images:(id)a1 correctionIndicatorType:(long long)a2 correctionPanelSourceType:(long long)a3;
- (void)setCorrectionAttributes:(id)a0;
- (void)setDismissButtonLocation:(unsigned long long)a0;
- (void)setSelectedCandidate:(unsigned long long)a0;

@end
