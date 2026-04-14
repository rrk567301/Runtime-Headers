@class SwitchProfileIntent, SwitchProfileAccountResolutionResult, SwitchProfileIntentResponse;

@interface SiriIdentityInternal.SwitchProfileIntentHandler : NSObject <SwitchProfileIntentHandling> {
    void /* unknown type, empty encoding */ pbAccess;
    void /* unknown type, empty encoding */ assistantServices;
    void /* unknown type, empty encoding */ siriKitEventSender;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleSwitchProfile:(SwitchProfileIntent *)a0 completion:(void (^)(SwitchProfileIntentResponse *))a1;
- (void)confirmSwitchProfile:(SwitchProfileIntent *)a0 completion:(void (^)(SwitchProfileIntentResponse *))a1;
- (void)resolveAccountForSwitchProfile:(SwitchProfileIntent *)a0 withCompletion:(void (^)(SwitchProfileAccountResolutionResult *))a1;

@end
