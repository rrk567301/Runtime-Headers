@protocol CNPhotoLikenessEditorCameraViewDelegate;

@interface CNPhotoLikenessEditorCameraView : NSView

@property (readonly, weak, nonatomic) id<CNPhotoLikenessEditorCameraViewDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
