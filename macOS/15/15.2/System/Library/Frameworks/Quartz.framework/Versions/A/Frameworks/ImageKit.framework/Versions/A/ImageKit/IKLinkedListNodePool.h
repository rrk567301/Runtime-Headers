@class NSMutableArray, IKLinkedList;

@interface IKLinkedListNodePool : NSObject {
    IKLinkedList *_freeNodes;
    NSMutableArray *_nodePool;
}

- (void)dealloc;
- (id)init;
- (id)node;
- (void)releaseNode:(id)a0;
- (void)free;

@end
