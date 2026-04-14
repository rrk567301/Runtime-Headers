@class NSArray;

@interface BPSBookmarkableArrayEnumerator : BPSBookmarkableEnumerator {
    NSArray *_array;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithArray:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (void).cxx_destruct;
- (void)reset;

@end
