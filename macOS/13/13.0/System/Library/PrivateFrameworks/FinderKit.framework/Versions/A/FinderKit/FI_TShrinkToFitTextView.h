@class FI_TShrinkToFitWindow, FI_TShrinkToFitController, NSValue, NSWindow;

@interface FI_TShrinkToFitTextView : FI_TTextView {
    FI_TShrinkToFitWindow *_stfWindow;
    struct TNSWeakPtr<FI_TShrinkToFitController> { NSValue *fWeakObject; } _weakSTFController;
}

@property (retain, nonatomic) NSWindow *parentWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maxGlobalFrame;
@property (readonly, nonatomic) double srcGlobalBaseline;
@property (nonatomic) BOOL textGrowsUpwards;
@property (nonatomic) unsigned long long maxUniChars;
@property (weak, nonatomic) FI_TShrinkToFitController *stfController;
@property (nonatomic) long long maxNumLines;

- (void)dealloc;
- (id)init;
- (void)setString:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityActionNames;
- (void)doCommandBySelector:(SEL)a0;
- (void)setFont:(id)a0;
- (BOOL)isEditing;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)quickLookWithEvent:(id)a0;
- (void)didChangeText;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)a0 withRecognizer:(id)a1;
- (void)setConstrainedFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
- (void)startEditing;
- (void)stopEditing:(BOOL)a0;
- (void)configureSTFWindow;
- (void)configureAttributes;
- (double)calcGlobalBaselineFromTop;
- (void)setMaxGlobalFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andGlobalBaseline:(double)a1;
- (struct pair<CGRect, double> { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })lineFragmentAndBaselineForCharAtIndex:(unsigned long long)a0;

@end
