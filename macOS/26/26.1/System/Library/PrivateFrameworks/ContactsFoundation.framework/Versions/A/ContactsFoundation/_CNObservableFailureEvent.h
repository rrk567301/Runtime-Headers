@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (unsigned long long)eventType;
- (unsigned long long)hash;
- (BOOL)hasValue;
- (id)error;
- (id)initWithError:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;

@end
