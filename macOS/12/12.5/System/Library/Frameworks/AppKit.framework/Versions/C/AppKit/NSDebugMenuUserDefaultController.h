@class NSString;

@interface NSDebugMenuUserDefaultController : NSObject <NSUserInterfaceValidations> {
    BOOL _defaultValue;
    id /* block */ _dynamicSetter;
    id /* block */ _dynamicGetter;
}

@property (readonly, copy) NSString *defaultName;

+ (id)controllerForDefaultWithName:(id)a0 defaultValue:(BOOL)a1 dynamicGetter:(id /* block */)a2 dynamicSetter:(id /* block */)a3;
+ (id)controllerForDefaultWithName:(id)a0 dynamicGetter:(id /* block */)a1 dynamicSetter:(id /* block */)a2;

- (void)dealloc;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)initWithName:(id)a0 defaultValue:(BOOL)a1 dynamicGetter:(id /* block */)a2 dynamicSetter:(id /* block */)a3;
- (void)_toggleDefault:(id)a0;
- (BOOL)currentBoolValue;
- (id)createNewMenuItem;

@end
