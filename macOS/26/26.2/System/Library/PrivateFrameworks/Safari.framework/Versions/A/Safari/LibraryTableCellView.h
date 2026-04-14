@class NSButton, NSString, NSLayoutConstraint;
@protocol LibraryTableCellViewDelegate;

@interface LibraryTableCellView : NSTableCellView <NSTextFieldDelegate> {
    NSString *_titleBeforeEditing;
}

@property (weak) NSButton *trailingButton;
@property (weak) NSButton *moreButton;
@property (weak) NSButton *closeButton;
@property (weak) NSLayoutConstraint *imageViewWidthConstraint;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (weak) id<LibraryTableCellViewDelegate> delegate;
@property (nonatomic) BOOL hovered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidEndEditing:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (BOOL)_allowsTextInput;
- (void)_closeTab:(id)a0;
- (void)_showMoreMenu:(id)a0;
- (void)_updateCloseButtonForcingHidden:(BOOL)a0;
- (void)setMoreButtonVisible:(BOOL)a0;
- (void)startEditing;
- (void)updateCloseButton;
- (void)updateTrailingButton;

@end
