@class NSString;

@interface _NSSelectionBinderPlugin : _NSValueBinderPlugin <_NSSelectionBinderPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(BOOL *)a2;
- (Class)valueClass:(id)a0 forBinding:(id)a1;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (unsigned long long)allowedContentBindingMask;
- (BOOL)canPopulateWithPlaceholders;
- (BOOL)canMixDynamicAndStaticContent;
- (void)populateObject:(id)a0 withContent:(id)a1 valueKey:(id)a2 objectKey:(id)a3 insertsNullPlaceholder:(BOOL)a4;
- (BOOL)canIgnorePopulatingObject:(id)a0;
- (void)storeModeWhenIgnoringObjectPopulation:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (BOOL)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)a0;
- (Class)_valueClass:(id)a0;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (void)addContentObject:(id)a0 isPlaceholder:(BOOL)a1 insertsNullPlaceholder:(BOOL)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;

@end
