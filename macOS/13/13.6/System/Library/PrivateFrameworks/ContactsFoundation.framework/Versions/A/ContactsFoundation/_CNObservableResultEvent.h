@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (id)value;
- (unsigned long long)eventType;
- (id)initWithResult:(id)a0;
- (BOOL)hasValue;
- (void)dematerializeWithObserver:(id)a0;

@end
