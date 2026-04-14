@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}

- (id)initWithGraph:(id)a0;
- (id)nextObject;
- (void)dealloc;

@end
