@interface NSDictionaryDetailBinder : NSArrayDetailBinder

+ (id)binderClassesSuperseded;
+ (id)bindingsForObject:(id)a0;
+ (char)isUsableWithObject:(id)a0;

- (char)_canGuaranteeOrderOfContentObjects;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(char)a1;
- (char)_performArrayBinderOperation:(long long)a0 singleObject:(id)a1 multipleObjects:(id)a2 singleIndex:(unsigned long long)a3 multipleIndexes:(id)a4 selectionMode:(int *)a5;
- (id)_referenceBinding;
- (void)_refreshDetailContentInBackground:(char)a0;
- (void)noteContentValueHasChanged;

@end
