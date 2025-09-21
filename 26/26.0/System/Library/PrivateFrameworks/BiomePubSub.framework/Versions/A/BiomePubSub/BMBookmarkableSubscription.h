@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (id)newBookmark;
- (void)cancel;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;

@end
