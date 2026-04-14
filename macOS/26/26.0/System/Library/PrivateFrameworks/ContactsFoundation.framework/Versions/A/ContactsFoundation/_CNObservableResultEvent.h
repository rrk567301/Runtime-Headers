@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (unsigned long long)eventType;
- (id)initWithResult:(id)a0;
- (id)value;
- (void)dematerializeWithObserver:(id)a0;
- (id)description;
- (BOOL)hasValue;
- (id)error;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
