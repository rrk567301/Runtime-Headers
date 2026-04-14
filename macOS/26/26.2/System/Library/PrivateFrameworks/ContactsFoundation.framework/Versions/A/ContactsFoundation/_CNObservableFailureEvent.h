@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (unsigned long long)eventType;
- (BOOL)hasValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)error;
- (id)initWithError:(id)a0;
- (void)dematerializeWithObserver:(id)a0;
- (void).cxx_destruct;
- (id)value;

@end
