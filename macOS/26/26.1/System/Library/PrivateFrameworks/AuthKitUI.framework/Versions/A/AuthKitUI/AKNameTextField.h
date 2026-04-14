@protocol AKNameTextFieldDelegate;

@interface AKNameTextField : NSTextField

@property (weak, nonatomic) id<AKNameTextFieldDelegate> nameTextFieldDelegate;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;

@end
