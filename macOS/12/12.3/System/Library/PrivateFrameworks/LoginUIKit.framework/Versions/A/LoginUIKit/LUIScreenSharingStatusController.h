@interface LUIScreenSharingStatusController : LUIController {
    BOOL _registered;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (id)initWithStyle:(int)a0;
- (void)_updateContentView;
- (void)tearDownController;
- (void)_setupContentView;
- (void)pauseController;
- (void)resumeController;
- (id)_colorForStyle;

@end
