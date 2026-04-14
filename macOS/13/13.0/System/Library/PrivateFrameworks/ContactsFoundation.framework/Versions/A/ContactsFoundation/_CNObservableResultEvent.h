@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)error;
- (void).cxx_destruct;
- (id)value;
- (unsigned long long)eventType;
- (id)initWithResult:(id)a0;
- (BOOL)hasValue;
- (void)dematerializeWithObserver:(id)a0;

@end
