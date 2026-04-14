@interface BPSEmpty : BMBookmarkableSubscription

- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;

@end
