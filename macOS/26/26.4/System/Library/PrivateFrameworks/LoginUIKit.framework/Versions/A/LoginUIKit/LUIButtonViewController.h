@class NSArray;

@interface LUIButtonViewController : LUIViewController {
    NSArray *_buttons;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)refresh;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0;
- (void)_layoutContentView;
- (void)dealloc;
- (void)setButtons:(id)a0;
- (void)_buttonPressed:(id)a0;
- (id)_buttonForIdentifier:(id)a0;
- (void)_setupContentView;
- (void)setUIEnabled:(BOOL)a0;
- (void)tearDownController;

@end
