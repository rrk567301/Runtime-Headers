@protocol AKNameTextFieldDelegate;

@interface AKNameTextField : NSTextField

@property (weak, nonatomic) id<AKNameTextFieldDelegate> nameTextFieldDelegate;

- (void).cxx_destruct;
- (char)becomeFirstResponder;

@end
