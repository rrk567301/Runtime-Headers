@interface NSMultipleSelectionBinder : NSSelectionBinder

+ (id)_pluginProtocol;
+ (id)bindingCategory;

- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(char)a1;
- (id)_referenceBinding;
- (id)availableBindings;
- (char)insertsNullPlaceholder;

@end
