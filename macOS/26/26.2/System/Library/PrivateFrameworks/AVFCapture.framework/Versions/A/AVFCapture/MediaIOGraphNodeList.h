@interface MediaIOGraphNodeList : NSObject {
    int *_nodes;
    unsigned long long _count;
}

+ (id)nodeListWithNodes:(int *)a0 count:(unsigned long long)a1;

- (unsigned long long)count;
- (void)dealloc;
- (id)nodeListByAppendingNodes:(int *)a0 count:(unsigned long long)a1;
- (id)initWithNodes:(int *)a0 count:(unsigned long long)a1;
- (int)nodeAtIndex:(unsigned long long)a0;

@end
