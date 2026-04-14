@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (void)cancel;
- (id)upstreamSubscriptions;
- (id)newBookmark;
- (void)requestDemand:(long long)a0;

@end
