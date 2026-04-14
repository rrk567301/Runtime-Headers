@class NSCountedSet;

@interface NSLifeguard : NSObject

@property (class, readonly) NSLifeguard *currentLifeguard;
@property (class, readonly, getter=_isTestable) BOOL _testable;
@property (class, readonly, getter=isOnDuty) BOOL onDuty;

@property (readonly, copy) NSCountedSet *proxyCounts;
@property (getter=isBusy) BOOL busy;

+ (void)beginWatch;
+ (long long)_currentLimit;

- (void)dealloc;
- (id)init;
- (void)addProxyForReceiver:(id)a0 context:(id)a1;
- (id)_canonicalIdentifierForReceiver:(id)a0 context:(id)a1;
- (void)_forgetProxyWithIdentifier:(id)a0;

@end
