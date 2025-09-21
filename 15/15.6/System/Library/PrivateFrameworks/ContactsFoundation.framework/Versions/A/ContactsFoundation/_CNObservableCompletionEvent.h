@interface _CNObservableCompletionEvent : CNObservableEvent

- (char)isEqual:(id)a0;
- (id)error;
- (id)value;
- (unsigned long long)eventType;
- (char)hasValue;
- (void)dematerializeWithObserver:(id)a0;

@end
