@class LUITextField;

@interface LUIInfoStatusController : LUIController {
    LUITextField *_infoTextField;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void)setInfo:(id)a0;
- (id)initWithStyle:(int)a0;
- (void)_setupContentView;

@end
