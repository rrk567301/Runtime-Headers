@interface SMSelectSourceDetailTableDelegate : IASCommonViewBasedTableDelegate

@property (readonly) id selectedObject;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;

@end
