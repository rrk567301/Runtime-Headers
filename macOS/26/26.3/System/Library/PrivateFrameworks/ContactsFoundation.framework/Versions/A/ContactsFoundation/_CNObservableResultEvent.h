@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (unsigned long long)eventType;
- (id)initWithResult:(id)a0;
- (id)error;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;
- (unsigned long long)hash;
- (id)value;

@end
