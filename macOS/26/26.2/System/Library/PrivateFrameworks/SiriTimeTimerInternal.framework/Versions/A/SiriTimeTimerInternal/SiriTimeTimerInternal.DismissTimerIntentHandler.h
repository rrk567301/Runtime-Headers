@class DismissTimerIntentResponse, DismissTimerIntent;

@interface SiriTimeTimerInternal.DismissTimerIntentHandler : NSObject <DismissTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmDismissTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleDismissTimer:(DismissTimerIntent *)a0 completion:(void (^)(DismissTimerIntentResponse *))a1;

@end
