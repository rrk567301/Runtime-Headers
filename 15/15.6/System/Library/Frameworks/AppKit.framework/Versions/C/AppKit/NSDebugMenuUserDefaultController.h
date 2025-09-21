@class NSString;

@interface NSDebugMenuUserDefaultController : NSObject <NSUserInterfaceValidations> {
    char _defaultValue;
    id /* block */ _dynamicSetter;
    id /* block */ _dynamicGetter;
}

@property (readonly, copy) NSString *defaultName;

+ (id)controllerForDefaultWithName:(id)a0 defaultValue:(char)a1 dynamicGetter:(id /* block */)a2 dynamicSetter:(id /* block */)a3;
+ (id)controllerForDefaultWithName:(id)a0 dynamicGetter:(id /* block */)a1 dynamicSetter:(id /* block */)a2;

- (void)dealloc;
- (void)_toggleDefault:(id)a0;
- (id)createNewMenuItem;
- (char)currentBoolValue;
- (id)initWithName:(id)a0 defaultValue:(char)a1 dynamicGetter:(id /* block */)a2 dynamicSetter:(id /* block */)a3;
- (char)validateUserInterfaceItem:(id)a0;

@end
