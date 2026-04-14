@interface BPSBookmarkableEnumerator : NSEnumerator

- (id)bpsPublisher;
- (id)nextObject;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (void)reset;

@end
