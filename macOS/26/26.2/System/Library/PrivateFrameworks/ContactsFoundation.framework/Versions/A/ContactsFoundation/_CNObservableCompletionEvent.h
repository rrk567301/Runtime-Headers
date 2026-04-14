@interface _CNObservableCompletionEvent : CNObservableEvent

- (unsigned long long)eventType;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (id)error;
- (void)dematerializeWithObserver:(id)a0;
- (id)value;

@end
