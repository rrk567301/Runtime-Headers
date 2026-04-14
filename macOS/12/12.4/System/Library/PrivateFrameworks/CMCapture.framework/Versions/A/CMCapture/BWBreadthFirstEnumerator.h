@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}

- (void)dealloc;
- (id)nextObject;
- (void)addChildren:(id)a0;
- (id)initWithGraph:(id)a0;

@end
