@class GCController, NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile {
    GCController *_controller;
    NSArray *_keys;
    NSSet *_allCodes;
    BOOL _isActive;
    int _numberOfKeysPressed;
    id /* block */ _keyChangedHandlerPrivate;
}

@property (copy, nonatomic) id /* block */ keyChangedHandler;
@property (readonly, nonatomic, getter=isAnyKeyPressed) BOOL anyKeyPressed;

- (id)name;
- (id)init;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)controller;
- (void)setController:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)commonInit;
- (id)productCategory;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (id)handlerQueue;
- (id /* block */)keyChangedHandlerPrivate;
- (void)setKeyChangedHandlerPrivate:(id /* block */)a0;
- (void)updateElementDeviceReferences;
- (BOOL)hasButton:(long long)a0;
- (id)buttonForKeyCode:(long long)a0;
- (void)setKeyValue:(long long)a0 down:(BOOL)a1;
- (id)setElementValuesFromKeyboardInput:(id)a0;
- (void)setStateFromKeyboardInput:(id)a0;
- (BOOL)shouldFilterInternalEvent:(struct __IOHIDEvent { } *)a0;

@end
