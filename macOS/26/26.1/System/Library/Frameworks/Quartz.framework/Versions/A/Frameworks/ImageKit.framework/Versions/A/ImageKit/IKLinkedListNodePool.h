@class NSMutableArray, IKLinkedList;

@interface IKLinkedListNodePool : NSObject {
    IKLinkedList *_freeNodes;
    NSMutableArray *_nodePool;
}

- (id)node;
- (void)free;
- (void)dealloc;
- (void)releaseNode:(id)a0;
- (id)init;

@end
