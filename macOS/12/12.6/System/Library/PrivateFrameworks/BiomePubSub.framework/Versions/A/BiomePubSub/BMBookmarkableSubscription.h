@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (void)cancel;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;
- (id)newBookmark;

@end
