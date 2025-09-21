@class NSStackView, NSMutableArray, NSTimer;

@interface LUIStatusViewController : LUIViewController {
    NSStackView *_stackView;
    NSMutableArray *_statusControllers;
    id _infoStatus;
    NSTimer *_infoStatusTimer;
    BOOL _layoutComplete;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (id)initWithStyle:(int)a0;
- (void)refresh;
- (void)dealloc;
- (void)setInfo:(id)a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)pauseController;
- (void)_hideInfoStatus:(id)a0;
- (void)_setupContentView;
- (void)resumeController;
- (void)tearDownController;

@end
