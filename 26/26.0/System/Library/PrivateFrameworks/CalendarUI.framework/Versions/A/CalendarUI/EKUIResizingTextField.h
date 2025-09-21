@class EKViewController;

@interface EKUIResizingTextField : CalUIResizingTextField

@property (weak) EKViewController *viewController;
@property BOOL consumeEnterPress;

- (BOOL)allowsVibrancy;
- (id)initWithViewController:(id)a0;
- (id)textAttributes;
- (void).cxx_destruct;
- (void)setPlaceholderText:(id)a0;
- (void)configureText;

@end
