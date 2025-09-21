@class NSString;

@interface ATDefaultDeviceAggregate : NSObject {
    struct shared_ptr<caulk::reactor<DefaultDeviceAggregate>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

@property (readonly, nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) NSString *deviceUID;

+ (id)sharedDefaultDeviceAggregate;
+ (id)sharedDefaultDeviceAggregateNoInit;

- (double)sampleRate;
- (struct shared_ptr<caulk::reactor<DefaultDeviceAggregate>> { void *x0; struct __shared_weak_count *x1; })impl;
- (unsigned int)outputChannelCount;
- (struct shared_ptr<const AggregateState> { struct AggregateState *x0; struct __shared_weak_count *x1; })_state;
- (void)removeObserver:(int)a0;
- (id)init;
- (int)addObserver:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_streamsToUse:(BOOL)a0;
- (unsigned int)inputChannelCount;
- (id)inputStreamsToUse;
- (id)outputStreamsToUse;
- (void)primarySessionIsActivatingWithInputCategory:(BOOL)a0;
- (void)primarySessionIsDeactivating;

@end
