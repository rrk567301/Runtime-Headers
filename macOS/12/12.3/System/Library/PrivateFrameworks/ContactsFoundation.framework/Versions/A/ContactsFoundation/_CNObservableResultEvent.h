@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)error;
- (id)value;
- (unsigned long long)eventType;
- (BOOL)hasValue;
- (id)initWithResult:(id)a0;
- (void)dematerializeWithObserver:(id)a0;

@end
