@class NSString, NSMutableArray;

@interface IKImageViewLayerQueue : NSObject <CALayerDelegate> {
    NSMutableArray *_queue;
    BOOL _isDequeueing;
    NSMutableArray *_purgatory;
}

@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)dealloc;
- (void)_popBlockAndDisplay;
- (void)_scheduleBlockForNextRunLoopIteration;
- (BOOL)cancelDisplayForAllLayers;
- (BOOL)cancelDisplayForLayers:(id)a0;
- (void)enqueueLayerToDisplay:(id)a0;
- (void)enqueueSuccessHandler:(id /* block */)a0;

@end
