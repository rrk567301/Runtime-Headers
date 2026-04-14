@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (unsigned long long)eventType;
- (id)initWithResult:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasValue;
- (id)error;
- (id)value;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;

@end
