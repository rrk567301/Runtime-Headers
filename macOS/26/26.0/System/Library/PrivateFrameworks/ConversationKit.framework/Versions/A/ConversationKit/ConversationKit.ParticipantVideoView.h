@interface ConversationKit.ParticipantVideoView : NSView {
    void /* unknown type, empty encoding */ frontFacingCameraView;
    void /* unknown type, empty encoding */ backFacingCameraView;
    void /* unknown type, empty encoding */ previousViewModelHash;
    void /* unknown type, empty encoding */ previousVideoSnapshot;
    void /* unknown type, empty encoding */ hasPerformedFirstVideoTransform;
    void /* unknown type, empty encoding */ shouldSkipTransformsForLayerHostMode;
    void /* unknown type, empty encoding */ pendingRegisterVideoLayerForFrontVideoProvider;
    void /* unknown type, empty encoding */ pendingRegisterVideoLayerForBackVideoProvider;
    void /* unknown type, empty encoding */ isViewFrozen;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
