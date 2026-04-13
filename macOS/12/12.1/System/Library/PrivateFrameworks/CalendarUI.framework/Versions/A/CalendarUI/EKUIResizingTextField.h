@class EKViewController;

@interface EKUIResizingTextField : CalUIResizingTextField

@property (weak) EKViewController *viewController;
@property BOOL consumeEnterPress;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)textAttributes;
- (id)initWithViewController:(id)a0;
- (void)setPlaceholderText:(id)a0;
- (void)configureText;

@end
