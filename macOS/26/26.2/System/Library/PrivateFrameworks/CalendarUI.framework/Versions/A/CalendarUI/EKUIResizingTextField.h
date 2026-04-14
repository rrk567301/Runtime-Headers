@class EKViewController;

@interface EKUIResizingTextField : CalUIResizingTextField

@property (weak) EKViewController *viewController;
@property BOOL consumeEnterPress;

- (id)initWithViewController:(id)a0;
- (id)textAttributes;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)setPlaceholderText:(id)a0;
- (void)configureText;

@end
