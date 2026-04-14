@class NSMutableArray;

@interface IKImageViewLayerQueue : NSObject {
    NSMutableArray *_queue;
    BOOL _isDequeueing;
    NSMutableArray *_purgatory;
}

@property id delegate;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)init;
- (void)dealloc;
- (void)_popBlockAndDisplay;
- (void)_scheduleBlockForNextRunLoopIteration;
- (BOOL)cancelDisplayForAllLayers;
- (BOOL)cancelDisplayForLayers:(id)a0;
- (void)enqueueLayerToDisplay:(id)a0;
- (void)enqueueSuccessHandler:(id /* block */)a0;

@end
