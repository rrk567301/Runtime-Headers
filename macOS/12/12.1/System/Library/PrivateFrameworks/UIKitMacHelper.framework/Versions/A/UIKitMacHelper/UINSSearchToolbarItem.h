@interface UINSSearchToolbarItem : NSSearchToolbarItem

- (void)dealloc;
- (void)_searchTextFieldDidBeginEditing:(id)a0;
- (void)_searchTextFieldDidEndEditing:(id)a0;
- (id)searchTextField;
- (id)_initWithItemIdentifier:(id)a0 searchTextField:(id)a1;

@end
