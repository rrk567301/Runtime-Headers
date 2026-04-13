@interface NSCollectionViewBinder : NSBinder {
    struct { unsigned char _ignoreChanges : 1; unsigned int _reservedTableBinder : 31; } _collectionViewBinderFlags;
}

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;

- (void)_init;
- (BOOL)isBindingReadOnly:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_updateSelectionIndexes:(id)a0;
- (void)_updateContent;
- (void)collectionView:(id)a0 didChangeToSelectionIndexes:(id)a1;

@end
