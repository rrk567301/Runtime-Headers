@interface LUIViewController : LUIController {
    BOOL _hidden;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)refresh;
- (id)initWithStyle:(int)a0;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)setUIEnabled:(BOOL)a0;
- (BOOL)usesWindow;

@end
