@class NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotificationReceiver : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)postPackedMechanisms:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
