@class AVPictureInPicturePlayerLayerView, AVPlayerController;

@interface AVPictureInPictureViewController : NSViewController

@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;

- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPictureInPicturePlayerLayerView:(id)a0;

@end
