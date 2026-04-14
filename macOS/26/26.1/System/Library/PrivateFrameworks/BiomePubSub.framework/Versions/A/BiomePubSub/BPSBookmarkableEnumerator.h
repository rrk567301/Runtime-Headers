@interface BPSBookmarkableEnumerator : NSEnumerator

- (id)bpsPublisher;
- (id)nextObject;
- (void)applyBookmark:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)reset;
- (id)bookmark;

@end
