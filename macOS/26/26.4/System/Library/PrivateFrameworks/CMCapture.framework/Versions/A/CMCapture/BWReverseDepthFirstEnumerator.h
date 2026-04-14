@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSMutableArray *_stack;
    unsigned long long _currentSinkIndex;
}

- (id)initWithGraph:(id)a0 vertexOrdering:(int)a1;
- (void)dealloc;
- (id)nextObject;

@end
