@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (unsigned long long)eventType;
- (id)initWithResult:(id)a0;
- (BOOL)hasValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)error;
- (void)dematerializeWithObserver:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)value;

@end
