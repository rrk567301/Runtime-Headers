@class AVPictureInPicturePlayerLayerView, AVPlayerController;

@interface AVPictureInPictureViewController : NSViewController

@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)loadView;
- (id)initWithPictureInPicturePlayerLayerView:(id)a0;

@end
