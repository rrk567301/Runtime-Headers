@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (id)newBookmark;
- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;

@end
