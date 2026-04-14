@class NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile {
    NSArray *_keys;
    NSSet *_allCodes;
    BOOL _isActive;
    int _numberOfKeysPressed;
    id /* block */ _keyChangedHandlerPrivate;
}

@property (copy, nonatomic) id /* block */ keyChangedHandler;
@property (readonly, nonatomic, getter=isAnyKeyPressed) BOOL anyKeyPressed;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)commonInit;
- (id)productCategory;
- (id)handlerQueue;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)setKeyChangedHandlerPrivate:(id /* block */)a0;
- (BOOL)hasButton:(long long)a0;
- (id)buttonForKeyCode:(long long)a0;
- (id /* block */)keyChangedHandlerPrivate;
- (id)setElementValuesFromKeyboardInput:(id)a0;
- (BOOL)shouldFilterInternalEvent:(struct __IOHIDEvent { } *)a0;
- (void)setKeyValue:(long long)a0 down:(BOOL)a1;
- (void)setStateFromKeyboardInput:(id)a0;

@end
