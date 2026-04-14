@class NSButton, NSString;
@protocol LibraryTableCellViewDelegate;

@interface LibraryTableCellView : NSTableCellView <NSTextFieldDelegate> {
    NSString *_titleBeforeEditing;
}

@property (weak) NSButton *trailingButton;
@property (weak) NSButton *moreButton;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (weak) id<LibraryTableCellViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (void)awakeFromNib;
- (id)accessibilityIdentifier;
- (void)controlTextDidEndEditing:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)_showMoreMenu:(id)a0;
- (void)startEditing;
- (BOOL)_allowsTextInput;
- (void)setMoreButtonVisible:(BOOL)a0;

@end
