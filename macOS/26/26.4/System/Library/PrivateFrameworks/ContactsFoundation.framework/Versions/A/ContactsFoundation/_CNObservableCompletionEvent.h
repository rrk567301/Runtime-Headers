@interface _CNObservableCompletionEvent : CNObservableEvent

- (unsigned long long)eventType;
- (BOOL)hasValue;
- (id)error;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (void)dematerializeWithObserver:(id)a0;

@end
