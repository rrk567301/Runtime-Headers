@class NSArray;

@interface SwiftUI.AttributedPlatformTextView : SwiftUI.PlatformTextView

@property (class, nonatomic, readonly) Class touchBarItemControllerClass;

@property (nonatomic, readonly) NSArray *readablePasteboardTypes;
@property (nonatomic, readonly) NSArray *writablePasteboardTypes;
@property (nonatomic, readonly) NSArray *acceptableDragTypes;

- (BOOL)validateMenuItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)_configurationForTextFormattingViewController;
- (id)_disabledComponentsForTextFormattingViewController;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)orderFrontColorPanel:(id)a0;
- (BOOL)readSelectionFromPasteboard:(id)a0 type:(id)a1;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
