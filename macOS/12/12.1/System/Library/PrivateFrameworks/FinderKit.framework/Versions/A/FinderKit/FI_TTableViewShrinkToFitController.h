@interface FI_TTableViewShrinkToFitController : FI_TShrinkToFitController

@property (nonatomic) unsigned long long row;
@property (nonatomic) unsigned long long column;

- (id)init;
- (id)initWithParentWindow:(id)a0 renameOp:(id)a1 delegate:(id)a2 row:(unsigned long long)a3 column:(unsigned long long)a4;
- (void)catchUpWithDataSourceChanges:(id)a0;

@end
