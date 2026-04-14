@class NSArray;

@interface LUIButtonViewController : LUIViewController {
    NSArray *_buttons;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (id)initWithStyle:(int)a0;
- (void)refresh;
- (void)dealloc;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)setButtons:(id)a0;
- (void)_buttonPressed:(id)a0;
- (id)_buttonForIdentifier:(id)a0;
- (void)_setupContentView;
- (void)setUIEnabled:(BOOL)a0;
- (void)tearDownController;

@end
