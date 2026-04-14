@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (id)initWithError:(id)a0;
- (unsigned long long)eventType;
- (id)error;
- (void).cxx_destruct;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;
- (unsigned long long)hash;
- (id)value;

@end
