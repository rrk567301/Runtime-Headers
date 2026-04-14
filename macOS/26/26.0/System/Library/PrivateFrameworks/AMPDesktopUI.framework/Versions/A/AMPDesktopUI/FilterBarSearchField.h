@class AMPFilterBarViewController;

@interface FilterBarSearchField : NSSearchField

@property (weak, nonatomic) AMPFilterBarViewController *controller;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)a0;

@end
