@interface NSMultipleSelectionBinder : NSSelectionBinder

+ (id)_pluginProtocol;
+ (id)bindingCategory;

- (id)availableBindings;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)_referenceBinding;
- (BOOL)insertsNullPlaceholder;

@end
