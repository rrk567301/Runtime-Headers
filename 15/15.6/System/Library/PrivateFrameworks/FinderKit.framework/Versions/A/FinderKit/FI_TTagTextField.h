@class NSObject;
@protocol TTagTextFieldDelegate;

@interface FI_TTagTextField : FI_TTextField

@property (weak) NSObject<TTagTextFieldDelegate> *delegate;

- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;

@end
