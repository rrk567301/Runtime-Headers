@interface LUIViewController : LUIController {
    char _hidden;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (char)isHidden;
- (void)setHidden:(char)a0;
- (id)initWithStyle:(int)a0;
- (void)refresh;
- (void)setUIEnabled:(char)a0;
- (char)usesWindow;

@end
