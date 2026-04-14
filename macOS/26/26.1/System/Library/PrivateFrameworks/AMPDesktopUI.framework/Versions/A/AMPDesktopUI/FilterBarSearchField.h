@class AMPFilterBarViewController;

@interface FilterBarSearchField : NSSearchField

@property (weak, nonatomic) AMPFilterBarViewController *controller;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)a0;

@end
