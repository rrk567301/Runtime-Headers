@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithGraph:(id)a0;

@end
