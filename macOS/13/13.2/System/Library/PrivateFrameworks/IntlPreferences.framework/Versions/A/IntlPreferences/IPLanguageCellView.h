@class NSTextField, NSLayoutConstraint, NSButton, IPLanguage;

@interface IPLanguageCellView : NSTableCellView

@property (weak) NSLayoutConstraint *textFieldTrailingConstraint;
@property (weak) NSTextField *localizedLanguageTextField;
@property (weak) NSTextField *primaryLanguageLabel;
@property (weak) NSButton *infoButton;
@property (retain) IPLanguage *language;
@property (getter=isPrimary) BOOL primary;
@property BOOL canDrag;
@property BOOL capitalizeLanguageNames;
@property BOOL truncateLanguageNames;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetCursorRects;
- (void)awakeFromNib;
- (void)initializeDefaultValues;
- (void)updateLanguageNames;

@end
