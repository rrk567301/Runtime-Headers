@interface UINSPopupButtonCell : NSPopUpButtonCell

@property (nonatomic) unsigned long long alignmentEdge;

- (id)init;
- (void)setMenu:(id)a0;
- (BOOL)_positionsMenuRelativeToRightEdge;
- (void)presentMenu:(id)a0 attachedToView:(id)a1;

@end
