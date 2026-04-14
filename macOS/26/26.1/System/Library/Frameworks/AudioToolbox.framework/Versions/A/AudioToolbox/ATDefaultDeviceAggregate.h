@class NSString;

@interface ATDefaultDeviceAggregate : NSObject {
    struct shared_ptr<caulk::reactor<DefaultDeviceAggregate>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

@property (readonly, nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) NSString *deviceUID;

+ (id)sharedDefaultDeviceAggregate;
+ (id)sharedDefaultDeviceAggregateNoInit;

- (struct shared_ptr<const AggregateState> { struct AggregateState *x0; struct __shared_weak_count *x1; })_state;
- (double)sampleRate;
- (struct shared_ptr<caulk::reactor<DefaultDeviceAggregate>> { void *x0; struct __shared_weak_count *x1; })impl;
- (id).cxx_construct;
- (unsigned int)outputChannelCount;
- (void).cxx_destruct;
- (void)removeObserver:(int)a0;
- (id)init;
- (int)addObserver:(id /* block */)a0;
- (id)_streamsToUse:(BOOL)a0;
- (unsigned int)inputChannelCount;
- (id)inputStreamsToUse;
- (id)outputStreamsToUse;
- (void)primarySessionIsActivatingWithInputCategory:(BOOL)a0;
- (void)primarySessionIsDeactivating;

@end
