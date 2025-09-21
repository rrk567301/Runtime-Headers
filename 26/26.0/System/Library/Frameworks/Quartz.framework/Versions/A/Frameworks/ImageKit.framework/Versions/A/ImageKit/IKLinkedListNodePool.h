@class NSMutableArray, IKLinkedList;

@interface IKLinkedListNodePool : NSObject {
    IKLinkedList *_freeNodes;
    NSMutableArray *_nodePool;
}

- (void)dealloc;
- (id)node;
- (void)free;
- (id)init;
- (void)releaseNode:(id)a0;

@end
