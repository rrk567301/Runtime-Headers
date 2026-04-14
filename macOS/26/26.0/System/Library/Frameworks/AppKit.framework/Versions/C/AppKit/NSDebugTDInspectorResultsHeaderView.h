@class NSButton, NSStackView, NSTextField;

@interface NSDebugTDInspectorResultsHeaderView : NSView {
    NSStackView *_vertStack;
}

@property (retain, nonatomic) NSTextField *headerText;
@property (retain, nonatomic) NSTextField *secondaryText;
@property (retain, nonatomic) NSTextField *tertiaryText;
@property (retain, nonatomic) NSButton *liveToggleButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;

@end
