@interface AMSSubscriptionEntitlementsTask : AMSTask

@property long long cachePolicy;
@property char extendedCarrierCheck;
@property long long mediaType;

+ (unsigned long long)_segmentForMediaType:(long long)a0 error:(id *)a1;
+ (id)updateCacheForMediaType:(long long)a0 account:(id)a1 data:(id)a2;

- (id)_fetchEntitlementsFromASD;
- (id)_fetchEntitlementsFromIC;
- (id)_queryCachedASDSubscriptionForSegment:(unsigned long long)a0 controller:(id)a1 reloadIfNeeded:(char)a2;
- (id)_reloadASDSubscriptionForSegment:(unsigned long long)a0 controller:(id)a1;
- (id)_resultFromASDEntitlements:(id)a0;
- (id)_resultFromICResponse:(id)a0;
- (char)_shouldIgnoreCaches;
- (char)_shouldIgnoreRemoteData;
- (id)initWithMediaType:(long long)a0;
- (id)performExternalLookup;

@end
