@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (unsigned long long)eventType;
- (id)initWithError:(id)a0;
- (BOOL)hasValue;
- (id)error;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)value;
- (void)dematerializeWithObserver:(id)a0;

@end
