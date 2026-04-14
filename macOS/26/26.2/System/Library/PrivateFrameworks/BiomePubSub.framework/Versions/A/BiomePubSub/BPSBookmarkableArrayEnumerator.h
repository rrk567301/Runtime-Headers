@class NSArray;

@interface BPSBookmarkableArrayEnumerator : BPSBookmarkableEnumerator {
    NSArray *_array;
    unsigned long long _index;
}

- (id)nextObject;
- (id)validateBookmark:(id)a0;
- (id)initWithArray:(id)a0;
- (id)bookmark;
- (void)reset;
- (void).cxx_destruct;
- (void)applyBookmark:(id)a0;

@end
