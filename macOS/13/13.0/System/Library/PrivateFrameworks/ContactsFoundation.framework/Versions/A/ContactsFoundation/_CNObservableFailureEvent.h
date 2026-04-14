@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)error;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)value;
- (unsigned long long)eventType;
- (BOOL)hasValue;
- (void)dematerializeWithObserver:(id)a0;

@end
