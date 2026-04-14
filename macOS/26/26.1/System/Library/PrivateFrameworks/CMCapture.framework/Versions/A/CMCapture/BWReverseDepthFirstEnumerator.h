@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSMutableArray *_stack;
    unsigned long long _currentSinkIndex;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithGraph:(id)a0 vertexOrdering:(int)a1;

@end
