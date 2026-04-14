@interface BPSBookmarkableEnumerator : NSEnumerator

- (id)nextObject;
- (id)bpsPublisher;
- (id)validateBookmark:(id)a0;
- (id)bookmark;
- (void)reset;
- (void)applyBookmark:(id)a0;

@end
