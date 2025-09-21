@class NSString, NSArray, NSSet;
@protocol BKHIDEventProcessor, BKHIDBufferedEventProcessor;

@interface BKHIDPrimaryEventProcessor : NSObject <BKHIDEventProcessor, BKHIDBufferedEventProcessor> {
    NSArray *_subProcessors[44];
    id<BKHIDEventProcessor> _defaultProcessor;
    NSArray *_bufferedSubProcessors[44];
    NSSet *_allBufferedEventProcessors;
    id<BKHIDBufferedEventProcessor> _defaultBufferedEventProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)processEvent:(inout struct __IOHIDEvent **)a0 sender:(id)a1 dispatcher:(id)a2;
- (id)_eventProcessorsForEventType:(unsigned int)a0;
- (long long)processEvent:(inout struct __IOHIDEvent **)a0 withContext:(id)a1 buffer:(id)a2 sequence:(id)a3 sender:(id)a4 dispatcher:(id)a5 resolution:(id)a6;
- (void)bufferingDidAddNewBuffers:(id)a0;
- (void)postEvent:(struct __IOHIDEvent { } *)a0 withContext:(id)a1 toResolution:(id)a2 fromSequence:(id)a3;
- (void)bufferDidEndDraining:(id)a0;
- (id)initWithSubProcessors:(id[44])a0 defaultProcessor:(id)a1;
- (void)conformsToBKHIDBufferedEventProcessor;
- (void)bufferWillBeginDraining:(id)a0;
- (void).cxx_destruct;

@end
