@protocol STProtectedControlDelegate;

@interface STProtectedDatePicker : NSDatePicker

@property (weak) id<STProtectedControlDelegate> actionCancelDelegate;

- (void).cxx_destruct;
- (char)sendAction:(SEL)a0 to:(id)a1;

@end
