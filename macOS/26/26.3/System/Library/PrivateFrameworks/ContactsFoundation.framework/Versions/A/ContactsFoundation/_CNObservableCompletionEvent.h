@interface _CNObservableCompletionEvent : CNObservableEvent

- (unsigned long long)eventType;
- (id)error;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;
- (id)value;

@end
