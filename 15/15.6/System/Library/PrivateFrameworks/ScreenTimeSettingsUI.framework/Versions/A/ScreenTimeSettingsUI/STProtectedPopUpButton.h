@protocol STProtectedControlDelegate;

@interface STProtectedPopUpButton : NSPopUpButton

@property (weak) id<STProtectedControlDelegate> actionCancelDelegate;

- (void).cxx_destruct;
- (char)sendAction:(SEL)a0 to:(id)a1;

@end
