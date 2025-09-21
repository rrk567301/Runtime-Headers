@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (id)value;
- (unsigned long long)eventType;
- (char)hasValue;
- (id)initWithResult:(id)a0;
- (void)dematerializeWithObserver:(id)a0;

@end
