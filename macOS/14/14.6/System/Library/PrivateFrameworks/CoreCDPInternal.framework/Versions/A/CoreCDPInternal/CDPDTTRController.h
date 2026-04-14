@interface CDPDTTRController : NSObject

- (void)_triggerTTRForEvent:(id)a0 componentName:(id)a1 componentVersion:(id)a2 componentID:(id)a3;
- (id)_componentIDForEvent:(id)a0 forTTRConfigSupportedErrors:(id)a1;
- (id)_componentIDForEventErrorDict:(id)a0 inTTRConfigSupportedErrors:(id)a1;
- (BOOL)_isTTREnabledForDict:(id)a0;
- (id)_normalizedTTRErrorForEvent:(id)a0;
- (void)_performTTRForRequest:(id)a0 completion:(id /* block */)a1;
- (void)requestTTRIfSupportedForEvent:(id)a0;
- (void)requestTTRWithTitle:(id)a0 message:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(id)a4 keywords:(id)a5 completion:(id /* block */)a6;

@end
