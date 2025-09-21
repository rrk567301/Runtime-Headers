@interface UINSPopupButtonCell : NSPopUpButtonCell

@property (nonatomic) unsigned long long alignmentEdge;

- (id)init;
- (void)_itemAdded:(id)a0;
- (char)_positionsMenuRelativeToRightEdge;
- (void)setMenu:(id)a0;
- (char)_isFirstItemHidden;
- (void)_setFirstItemHidden:(char)a0;
- (void)presentMenu:(id)a0 attachedToView:(id)a1;

@end
