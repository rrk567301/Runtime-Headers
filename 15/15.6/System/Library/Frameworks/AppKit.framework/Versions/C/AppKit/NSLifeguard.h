@class NSCountedSet;

@interface NSLifeguard : NSObject

@property (class, readonly) NSLifeguard *currentLifeguard;
@property (class, readonly, getter=_isTestable) char _testable;
@property (class, readonly, getter=isOnDuty) char onDuty;

@property (readonly, copy) NSCountedSet *proxyCounts;
@property (getter=isBusy) char busy;

+ (long long)_currentLimit;
+ (void)beginWatch;

- (void)dealloc;
- (id)init;
- (id)_canonicalIdentifierForReceiver:(id)a0 context:(id)a1;
- (void)_forgetProxyWithIdentifier:(id)a0;
- (void)addProxyForReceiver:(id)a0 context:(id)a1;

@end
