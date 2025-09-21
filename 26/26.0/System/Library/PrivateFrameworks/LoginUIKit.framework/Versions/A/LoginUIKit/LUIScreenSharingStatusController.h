@interface LUIScreenSharingStatusController : LUIController {
    BOOL _registered;
}

+ (id)controllerWithStyle:(int)a0;

- (id)initWithStyle:(int)a0;
- (void)dealloc;
- (void)_updateContentView;
- (void)pauseController;
- (id)_colorForStyle;
- (void)_setupContentView;
- (void)resumeController;
- (void)tearDownController;

@end
