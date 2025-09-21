@class NSString, NSObject;

@interface DMTWaitForKVOChangeOperation : CATOperation

@property (readonly, nonatomic) NSObject *observedObject;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) NSObject *expectedValue;
@property (readonly, nonatomic) char requireExpectedValue;
@property (nonatomic, getter=isObserving) char observing;
@property (retain, nonatomic) NSObject *initialValue;

- (void).cxx_destruct;
- (void)cancel;
- (char)isAsynchronous;
- (void)main;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)beginObserving;
- (void)compareExpectedValueWithChangedValue:(id)a0;
- (void)endObservingIfNeeded;
- (void)endOperationAndTearDownWithError:(id)a0 resultObject:(id)a1;
- (void)handleKVOChangeWithValueOfKeyPath:(id)a0;
- (id)initWithObservedObject:(id)a0 keyPath:(id)a1 expectedValue:(id)a2 requireExpectedValue:(char)a3;

@end
