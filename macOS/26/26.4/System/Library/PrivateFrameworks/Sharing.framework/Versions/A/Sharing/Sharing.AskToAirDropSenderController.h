@class OS_dispatch_queue, NSString, NSError;

@interface Sharing.AskToAirDropSenderController : NSObject {
    void /* function */ nearbyDeviceCountChangedHandler;
    void /* function */ didStopHandler;
    void /* unknown type, empty encoding */ airDropClient;
}

@property (nonatomic, readonly) OS_dispatch_queue *queue;
@property (nonatomic) long long nearbyDeviceCount;
@property (nonatomic) BOOL hasSeenPrivacyPrompt;
@property (nonatomic, copy) id /* block */ nearbyDeviceCountChangedHandler;
@property (nonatomic, copy) id /* block */ didStopHandler;

- (void)stop;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchPrivacyPromptInformationWithCompletion:(id /* block */)a0;
- (void)fetchSharingNameWithCompletionHandler:(void (^)(NSString *, NSError *))a0;
- (void)startAs:(id)a0 pin:(id)a1;
- (void)startWithPin:(id)a0;

@end
