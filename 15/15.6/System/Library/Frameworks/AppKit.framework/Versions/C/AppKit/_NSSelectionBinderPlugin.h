@class NSString;

@interface _NSSelectionBinderPlugin : _NSValueBinderPlugin <_NSSelectionBinderPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)_valueClass:(id)a0;
- (char)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(char *)a2;
- (void)addContentObject:(id)a0 isPlaceholder:(char)a1 insertsNullPlaceholder:(char)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;
- (unsigned long long)allowedContentBindingMask;
- (char)canIgnorePopulatingObject:(id)a0;
- (char)canMixDynamicAndStaticContent;
- (char)canPopulateWithPlaceholders;
- (void)populateObject:(id)a0 withContent:(id)a1 valueKey:(id)a2 objectKey:(id)a3 insertsNullPlaceholder:(char)a4;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (char)shouldAlwaysUpdateDisplayValue;
- (char)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)a0;
- (void)storeModeWhenIgnoringObjectPopulation:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (Class)valueClass:(id)a0 forBinding:(id)a1;

@end
