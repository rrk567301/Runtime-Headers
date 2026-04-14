@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (unsigned long long)eventType;
- (BOOL)hasValue;
- (id)error;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithResult:(id)a0;
- (id)value;
- (id)description;
- (void)dematerializeWithObserver:(id)a0;

@end
