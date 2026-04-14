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

- (void)setInfo:(id)a0;
- (void)refresh;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0;
- (void)_layoutContentView;
- (void)dealloc;
- (void)pauseController;
- (void)_hideInfoStatus:(id)a0;
- (void)_setupContentView;
- (void)resumeController;
- (void)tearDownController;

@end
