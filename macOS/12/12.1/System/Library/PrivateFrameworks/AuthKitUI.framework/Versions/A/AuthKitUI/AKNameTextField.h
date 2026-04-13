@protocol AKNameTextFieldDelegate;

@interface AKNameTextField : NSTextField

@property (weak) id<AKNameTextFieldDelegate> nameTextFieldDelegate;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;

@end
