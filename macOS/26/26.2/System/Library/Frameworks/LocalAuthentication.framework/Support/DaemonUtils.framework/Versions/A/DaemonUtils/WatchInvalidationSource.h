@class NSString;

@interface WatchInvalidationSource : PreflightCacheInvalidationSource <WatchChangeObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)invalidationReason;
- (void)updateStatus;
- (void)dealloc;
- (id)initWithPreflightCache:(id)a0;
- (void)watchDevicesChanged:(BOOL)a0;

@end
