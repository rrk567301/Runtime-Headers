@interface NSMultipleSelectionBinder : NSSelectionBinder

+ (id)_pluginProtocol;
+ (id)bindingCategory;

- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)_referenceBinding;
- (id)availableBindings;
- (BOOL)insertsNullPlaceholder;

@end
