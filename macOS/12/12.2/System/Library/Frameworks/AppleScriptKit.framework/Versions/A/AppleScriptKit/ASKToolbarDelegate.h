@class NSMutableArray;

@interface ASKToolbarDelegate : NSObject {
    NSMutableArray *_toolbarItems;
    NSMutableArray *_allowedItemIdentifiers;
    NSMutableArray *_defaultItemIdentifiers;
    NSMutableArray *_selectableItemIdentifiers;
}

+ (id)_standardIdentifierWithKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void)setDefaultItemIdentifiers:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarSelectableItemIdentifiers:(id)a0;
- (BOOL)validateToolbarItem:(id)a0;
- (void)toolbarItemClicked:(id)a0;
- (id)defaultItemIdentifiers;
- (id)selectableItemIdentifiers;
- (id)allowedItemIdentifiers;
- (void)setAllowedItemIdentifiers:(id)a0;
- (id)toolbarItems;
- (void)setToolbarItems:(id)a0;
- (void)setSelectableItemIdentifiers:(id)a0;

@end
