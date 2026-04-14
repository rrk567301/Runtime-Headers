@class CNPhotoLikenessEditorCroppingView, NSView;

@interface CNPhotoLikenessEditorCroppingViewController : NSViewController

@property (retain, nonatomic) CNPhotoLikenessEditorCroppingView *croppingView;
@property (retain, nonatomic) NSView *hostView;
@property (nonatomic) double zoom;
@property (nonatomic) struct CGPoint { double x; double y; } center;

- (void)reloadData;
- (void)setCornerRadius:(double)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)setCroppingDataSource:(id)a0;
- (void)setZoomPosition:(double)a0;
- (void)setupCroppingView;
- (void)setupHostView;

@end
