@class INHangUpCallIntentResponse, INHangUpCallIntent;

@interface SiriPhoneIntents.HangUpCallIntentHandler : NSObject <INHangUpCallIntentHandling> {
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ deviceState;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmHangUpCall:(INHangUpCallIntent *)a0 completion:(void (^)(INHangUpCallIntentResponse *))a1;
- (void)handleHangUpCall:(INHangUpCallIntent *)a0 completion:(void (^)(INHangUpCallIntentResponse *))a1;

@end
