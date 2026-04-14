@class NSArray, NSMutableArray;

@interface BWDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSArray *_sourceNodes;
    NSMutableArray *_stack;
    unsigned long long _currentSourceIndex;
}

- (id)nextObject;
- (id)initWithGraph:(id)a0 vertexOrdering:(int)a1;
- (void)dealloc;
- (id)initWithSourceNodes:(id)a0 vertexOrdering:(int)a1;

@end
