@class EKViewController;

@interface EKUIResizingTextField : CalUIResizingTextField

@property (weak) EKViewController *viewController;
@property char consumeEnterPress;

- (void).cxx_destruct;
- (char)allowsVibrancy;
- (id)initWithViewController:(id)a0;
- (void)setPlaceholderText:(id)a0;
- (void)configureText;
- (id)textAttributes;

@end
