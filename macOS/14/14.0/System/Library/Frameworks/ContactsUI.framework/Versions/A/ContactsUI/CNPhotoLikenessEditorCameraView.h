@protocol CNPhotoLikenessEditorCameraViewDelegate;

@interface CNPhotoLikenessEditorCameraView : NSView

@property (readonly, weak, nonatomic) id<CNPhotoLikenessEditorCameraViewDelegate> delegate;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
