@class BKSHIDEventDispatchingTarget, NSSet, NSString, NSMutableArray;

@interface BKHIDEventBuffer : NSObject <BSDescriptionStreamable, BSInvalidatable> {
    NSMutableArray *_buffer;
    BOOL _invalidated;
}

@property (readonly, copy, nonatomic) BKSHIDEventDispatchingTarget *dispatchTarget;
@property (nonatomic) BOOL allBufferingClientsTerminated;
@property (retain, nonatomic) NSSet *bufferingPIDs;
@property (readonly, nonatomic) BOOL hasEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_test_peekAllEvents;
- (void).cxx_destruct;
- (id)initWithDispatchTarget:(id)a0;
- (id)_test_peekAllIOHIDEvents;
- (void)appendEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1 sequence:(id)a2 additionalContext:(id)a3;
- (id)drainAllEvents;
- (void)dealloc;

@end
