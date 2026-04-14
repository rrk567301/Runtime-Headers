@class DRMoveHelper;

@interface DRBurnSetupPanelPrivate : DRSetupPanelPrivate {
    float _resizeDelta;
    DRMoveHelper *_moveHelper;
    id _defaultButtonDefaultTitle;
}

- (void)dealloc;
- (float)resizeDelta;
- (id)moveHelper;
- (id)defaultButtonDefaultTitle;
- (void)setResizeDelta:(float)a0;
- (void)setMoveHelper:(id)a0;
- (void)setDefaultButtonDefaultTitle:(id)a0;

@end
