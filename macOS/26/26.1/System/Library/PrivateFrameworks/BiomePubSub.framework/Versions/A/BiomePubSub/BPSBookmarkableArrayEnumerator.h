@class NSArray;

@interface BPSBookmarkableArrayEnumerator : BPSBookmarkableEnumerator {
    NSArray *_array;
    unsigned long long _index;
}

- (id)nextObject;
- (void)applyBookmark:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (id)bookmark;

@end
