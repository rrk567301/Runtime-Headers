@class DRMoveHelper;

@interface DRBurnSetupPanelPrivate : DRSetupPanelPrivate {
    float _resizeDelta;
    DRMoveHelper *_moveHelper;
    id _defaultButtonDefaultTitle;
}

- (void)dealloc;
- (void)setDefaultButtonDefaultTitle:(id)a0;
- (float)resizeDelta;
- (void)setResizeDelta:(float)a0;
- (id)moveHelper;
- (void)setMoveHelper:(id)a0;
- (id)defaultButtonDefaultTitle;

@end
