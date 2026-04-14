@class AVPictureInPicturePlayerLayerView, AVPlayerController;

@interface AVPictureInPictureViewController : NSViewController

@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithPictureInPicturePlayerLayerView:(id)a0;

@end
