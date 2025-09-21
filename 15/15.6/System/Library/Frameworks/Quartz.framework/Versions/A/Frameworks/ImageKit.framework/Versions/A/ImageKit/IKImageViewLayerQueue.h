@class NSMutableArray;

@interface IKImageViewLayerQueue : NSObject {
    NSMutableArray *_queue;
    char _isDequeueing;
    NSMutableArray *_purgatory;
}

@property id delegate;

- (void)dealloc;
- (id)init;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)_popBlockAndDisplay;
- (void)_scheduleBlockForNextRunLoopIteration;
- (char)cancelDisplayForAllLayers;
- (char)cancelDisplayForLayers:(id)a0;
- (void)enqueueLayerToDisplay:(id)a0;
- (void)enqueueSuccessHandler:(id /* block */)a0;

@end
