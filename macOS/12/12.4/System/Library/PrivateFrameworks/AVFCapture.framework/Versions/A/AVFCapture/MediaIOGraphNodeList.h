@interface MediaIOGraphNodeList : NSObject {
    int *_nodes;
    unsigned long long _count;
}

+ (id)nodeListWithNodes:(int *)a0 count:(unsigned long long)a1;

- (void)dealloc;
- (unsigned long long)count;
- (int)nodeAtIndex:(unsigned long long)a0;
- (id)initWithNodes:(int *)a0 count:(unsigned long long)a1;
- (id)nodeListByAppendingNodes:(int *)a0 count:(unsigned long long)a1;

@end
