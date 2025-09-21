@class NSString;

@interface _NSBinderPlugin : NSObject <_NSBinderPlugin> {
    id _binder;
    struct __binderPluginFlags { unsigned char _isTableColumnPlugin : 1; unsigned char _isOutlineColumnPlugin : 1; unsigned char _isCellPlugin : 1; unsigned int _reservedBinderPlugin : 29; } _binderPluginFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_deprecatedBindings;
+ (char)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (char)shouldUseInvalidationForObject:(id)a0;
- (char)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(char *)a2;
- (id)cellOrControlForObject:(id)a0;
- (void)connectionWasBroken:(id)a0;
- (void)connectionWasEstablished:(id)a0;
- (Class)defaultPlaceholderLookupClassForBinding:(id)a0 object:(id)a1;
- (id)editorWithObject:(id)a0;
- (char)handleObservingRefresh:(id)a0;
- (id)indexPathForOutlineView:(id)a0 row:(long long)a1;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (char)isEditingAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (char)isEditingAtIndexPath:(id)a0 withObject:(id)a1;
- (char)isEditingWithObject:(id)a0;
- (char)isInvalidationCapableObject:(id)a0 withSelector:(SEL)a1;
- (char)needsAction;
- (id)objectMechanismsRequired;
- (char)observeKeyPathForBindingInfo:(id)a0 registerOrUnregister:(char)a1 object:(id)a2;
- (id)viewForObject:(id)a0;

@end
