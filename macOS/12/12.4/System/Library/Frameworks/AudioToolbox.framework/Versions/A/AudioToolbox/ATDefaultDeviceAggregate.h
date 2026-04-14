@class NSString;

@interface ATDefaultDeviceAggregate : NSObject {
    struct shared_ptr<caulk::reactor<DefaultDeviceAggregate>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

@property (readonly, nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) NSString *deviceUID;

+ (id)sharedDefaultDeviceAggregate;
+ (id)sharedDefaultDeviceAggregateNoInit;

- (id)init;
- (void).cxx_destruct;
- (struct shared_ptr<const AggregateState> { struct AggregateState *x0; struct __shared_weak_count *x1; })_state;
- (id).cxx_construct;
- (int)addObserver:(id /* block */)a0;
- (void)removeObserver:(int)a0;
- (double)sampleRate;
- (struct shared_ptr<caulk::reactor<DefaultDeviceAggregate>> { void *x0; struct __shared_weak_count *x1; })impl;
- (id)_streamsToUse:(BOOL)a0;
- (unsigned int)inputChannelCount;
- (unsigned int)outputChannelCount;
- (id)inputStreamsToUse;
- (id)outputStreamsToUse;
- (void)primarySessionIsActivatingWithInputCategory:(BOOL)a0;
- (void)primarySessionIsDeactivating;

@end
