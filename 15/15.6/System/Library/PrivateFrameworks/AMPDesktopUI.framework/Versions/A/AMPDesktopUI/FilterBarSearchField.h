@class AMPFilterBarViewController;

@interface FilterBarSearchField : NSSearchField

@property (weak, nonatomic) AMPFilterBarViewController *controller;

- (void).cxx_destruct;
- (char)becomeFirstResponder;
- (char)resignFirstResponder;
- (void)textDidEndEditing:(id)a0;

@end
