@class NSString, NSNumber;

@interface BLPrivacyInfo : NSObject <BUAccountsObserving> {
    NSNumber *_cachedValue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPrivacyInfo;

- (void)account:(unsigned long long)a0 didChangeWithReason:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_startObservingNotifications;
- (void)_stopObservingNotifications;
- (void)clearCachedValue;
- (BOOL)isGDPRPrivacyAcknowledgementRequired;

@end
