@class NSMutableArray;

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithGraph:(id)a0;

@end
