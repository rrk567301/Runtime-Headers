@class NSString, NSMutableDictionary;

@interface NSObjectParameterBinder : NSBinder {
    struct __objectParameterBinderFlags { unsigned char _needsToRefreshOriginalValues : 1; unsigned int _reservedObjectParameterBinder : 31; } _objectParameterBinderFlags;
    NSString *_bindingValueBeingSet;
    NSMutableDictionary *_originalValues;
}

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;

- (void)_init;
- (void)_connectionWasEstablished;
- (BOOL)isBindingReadOnly:(id)a0;
- (id)availableBindings;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_dealloc;
- (BOOL)canAddBinding:(id)a0 toController:(id)a1;
- (Class)valueClassForBinding:(id)a0;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;

@end
