@class LACKeyBagStateProviderMKBAdapter, NSString, LACKeyBagObserverCollection, LACDarwinNotificationCenter;

@interface LACKeyBagMKBAdapter : NSObject <LACDarwinNotificationCenterObserver, LACKeyBag> {
    long long _state;
    LACKeyBagStateProviderMKBAdapter *_keyBagStateProvider;
    LACKeyBagObserverCollection *_observers;
    LACDarwinNotificationCenter *_notificationCenter;
    unsigned int _userId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned int)userId;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (long long)state;
- (void)notificationCenter:(id)a0 didReceiveNotification:(struct __CFString { } *)a1;
- (id)initWithUserId:(unsigned int)a0;
- (void)_addKeybagStatusObserver;
- (void)_removeKeybagStatusObserver;
- (void)_updateKeybagState;
- (id)initWithKeyBagStateProvider:(id)a0 notificationCenter:(id)a1 userId:(unsigned int)a2;

@end
