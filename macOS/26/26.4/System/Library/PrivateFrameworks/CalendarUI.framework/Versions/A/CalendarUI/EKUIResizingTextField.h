@class EKViewController;

@interface EKUIResizingTextField : CalUIResizingTextField

@property (weak) EKViewController *viewController;
@property BOOL consumeEnterPress;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)textAttributes;
- (void)setPlaceholderText:(id)a0;
- (void)configureText;

@end
