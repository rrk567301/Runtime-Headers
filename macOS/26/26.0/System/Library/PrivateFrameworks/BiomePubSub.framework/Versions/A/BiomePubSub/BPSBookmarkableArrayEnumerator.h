@class NSArray;

@interface BPSBookmarkableArrayEnumerator : BPSBookmarkableEnumerator {
    NSArray *_array;
    unsigned long long _index;
}

- (void)reset;
- (id)nextObject;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;

@end
