@class CNWeakArray;
@protocol CNSchedulerProvider;

@interface CNAsynchronousCacheEntry : NSObject

@property (readonly) id<CNSchedulerProvider> schedulerProvider;
@property (retain) id currentValue;
@property (readonly) CNWeakArray *delegates;
@property (readonly) double timestampOfCurrentValue;

- (void)addDelegate:(id)a0;
- (id)initWithSchedulerProvider:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)updateValue:(id)a0;
- (void)removeDelegates:(id)a0;
- (void)withLock_addDelegate:(id)a0;
- (void)withLock_compactAndRemoveDelegates:(id)a0;
- (void)withLock_compactDelegates;

@end
