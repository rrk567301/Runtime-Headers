@class NSMutableArray;

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
}

- (id)initWithGraph:(id)a0;
- (id)nextObject;
- (void)dealloc;

@end
