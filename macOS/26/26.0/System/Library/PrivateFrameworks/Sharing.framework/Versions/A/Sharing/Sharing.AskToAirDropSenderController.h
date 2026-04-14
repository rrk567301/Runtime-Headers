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

- (id)initWithQueue:(id)a0;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPrivacyPromptInformationWithCompletion:(id /* block */)a0;
- (void)fetchSharingNameWithCompletionHandler:(void (^)(NSString *, NSError *))a0;
- (void)startAs:(id)a0 pin:(id)a1;
- (void)startWithPin:(id)a0;

@end
