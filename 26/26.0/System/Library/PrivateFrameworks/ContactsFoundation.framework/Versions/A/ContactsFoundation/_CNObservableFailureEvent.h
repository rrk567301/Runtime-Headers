@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (unsigned long long)eventType;
- (id)value;
- (id)initWithError:(id)a0;
- (void)dematerializeWithObserver:(id)a0;
- (BOOL)hasValue;
- (id)error;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
