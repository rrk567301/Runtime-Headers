@class NSButton, NSString;
@protocol LibraryTableCellViewDelegate;

@interface LibraryTableCellView : NSTableCellView <NSTextFieldDelegate> {
    NSString *_titleBeforeEditing;
}

@property (weak) NSButton *trailingButton;
@property (weak) NSButton *moreButton;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (weak) NSButton *leadingButton;
@property (weak) id<LibraryTableCellViewDelegate> delegate;
@property (nonatomic) BOOL hovered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidEndEditing:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)_allowsTextInput;
- (void)_closeTab:(id)a0;
- (void)_showMoreMenu:(id)a0;
- (void)_updateLeadingButtonForcingHidden:(BOOL)a0;
- (void)setMoreButtonVisible:(BOOL)a0;
- (void)startEditing;
- (void)updateLeadingButton;
- (void)updateTrailingButton;

@end
