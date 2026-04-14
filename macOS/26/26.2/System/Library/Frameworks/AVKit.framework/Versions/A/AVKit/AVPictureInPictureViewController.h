@class AVPictureInPicturePlayerLayerView, AVPlayerController;

@interface AVPictureInPictureViewController : NSViewController

@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithPictureInPicturePlayerLayerView:(id)a0;

@end
