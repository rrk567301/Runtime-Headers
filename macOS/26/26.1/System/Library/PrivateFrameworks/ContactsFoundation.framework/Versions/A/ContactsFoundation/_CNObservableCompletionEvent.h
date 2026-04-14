@interface _CNObservableCompletionEvent : CNObservableEvent

- (unsigned long long)eventType;
- (BOOL)hasValue;
- (id)error;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;

@end
