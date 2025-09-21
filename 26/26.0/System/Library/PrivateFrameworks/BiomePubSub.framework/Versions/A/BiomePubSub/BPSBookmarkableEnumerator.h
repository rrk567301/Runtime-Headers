@interface BPSBookmarkableEnumerator : NSEnumerator

- (id)bpsPublisher;
- (void)reset;
- (id)nextObject;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;

@end
