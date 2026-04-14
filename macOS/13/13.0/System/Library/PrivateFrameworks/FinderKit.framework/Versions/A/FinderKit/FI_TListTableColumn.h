@interface FI_TListTableColumn : NSTableColumn

@property (nonatomic) BOOL isSortColumn;
@property (nonatomic) int mainProperty;

- (void)setIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)awakeFromNib;
- (id)copyColumn;

@end
