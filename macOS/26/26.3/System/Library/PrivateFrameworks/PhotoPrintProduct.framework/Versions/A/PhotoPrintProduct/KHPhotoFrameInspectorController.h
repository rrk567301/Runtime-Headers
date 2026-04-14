@class KHPhotoEditButtonController, KHPhotoPrintOptionsController, KHPhotoCaptionPickerController, NSSlider, KHTreatmentPickerController, KHInspectorTileViewController, KHPhotoEffectsPickerController;

@interface KHPhotoFrameInspectorController : KHFrameInspectorController

@property (retain, nonatomic) NSSlider *zoomSlider;
@property (retain, nonatomic) NSSlider *opacitySlider;
@property (retain, nonatomic) KHInspectorTileViewController *zoomTileController;
@property (retain, nonatomic) KHInspectorTileViewController *opacityTileController;
@property (retain, nonatomic) KHInspectorTileViewController *treatmentTileController;
@property (retain, nonatomic) KHInspectorTileViewController *effectsTileController;
@property (retain, nonatomic) KHInspectorTileViewController *editTileController;
@property (retain, nonatomic) KHInspectorTileViewController *printsTileController;
@property (retain, nonatomic) KHInspectorTileViewController *captionTileController;
@property (retain, nonatomic) KHTreatmentPickerController *treatmentPicker;
@property (retain, nonatomic) KHPhotoEffectsPickerController *effectsPicker;
@property (retain, nonatomic) KHPhotoEditButtonController *editButtonController;
@property (retain, nonatomic) KHPhotoPrintOptionsController *printOptionsController;
@property (retain, nonatomic) KHPhotoCaptionPickerController *captionPicker;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setFrames:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)loadView;
- (void)viewDidAppear;
- (id)badgeImage;
- (void)opacitySliderChanged:(id)a0;
- (void)setupModelBindings;
- (void)teardownBindings;
- (id)viewForPresentationMode:(int)a0;
- (void)zoomSliderChanged:(id)a0;

@end
