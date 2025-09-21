@interface AMPRolloverTableCell : NSTableCellView

@property (nonatomic) char rollover;

- (void)prepareForReuse;
- (id)propertyKeysForViewSpy;

@end
