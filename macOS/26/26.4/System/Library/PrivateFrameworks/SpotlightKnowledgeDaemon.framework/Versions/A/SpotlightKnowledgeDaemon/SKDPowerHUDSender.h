@class NSObject;
@protocol OS_dispatch_queue;

@interface SKDPowerHUDSender : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendLog:(id)a0 identifier:(id)a1 itemsCount:(long long)a2 domain:(id)a3;

@end
