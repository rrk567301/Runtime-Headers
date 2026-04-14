@interface BPSBookmarkableEnumerator : NSEnumerator

- (id)validateBookmark:(id)a0;
- (id)bpsPublisher;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (void)reset;
- (id)nextObject;

@end
