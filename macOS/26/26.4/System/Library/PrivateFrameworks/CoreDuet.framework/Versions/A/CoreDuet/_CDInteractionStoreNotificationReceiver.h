@class NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotificationReceiver : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)postPackedMechanisms:(unsigned long long)a0;
- (id)init;
- (void)dealloc;

@end
