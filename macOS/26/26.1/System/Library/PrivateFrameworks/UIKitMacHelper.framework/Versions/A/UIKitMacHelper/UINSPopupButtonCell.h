@interface UINSPopupButtonCell : NSPopUpButtonCell

@property (nonatomic) unsigned long long alignmentEdge;

- (void)setMenu:(id)a0;
- (id)init;
- (void)_itemAdded:(id)a0;
- (BOOL)_positionsMenuRelativeToRightEdge;
- (BOOL)_isFirstItemHidden;
- (void)_setFirstItemHidden:(BOOL)a0;
- (void)presentMenu:(id)a0 attachedToView:(id)a1;

@end
