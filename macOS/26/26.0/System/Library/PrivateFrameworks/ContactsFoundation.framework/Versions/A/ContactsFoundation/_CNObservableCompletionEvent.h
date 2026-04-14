@interface _CNObservableCompletionEvent : CNObservableEvent

- (unsigned long long)eventType;
- (id)value;
- (void)dematerializeWithObserver:(id)a0;
- (BOOL)hasValue;
- (id)error;
- (BOOL)isEqual:(id)a0;

@end
