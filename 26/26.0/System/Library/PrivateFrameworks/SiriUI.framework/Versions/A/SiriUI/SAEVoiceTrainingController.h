@interface SAEVoiceTrainingController : OBTemplateContainerViewController <VTUITrainingViewControllerDelegate>

@property (nonatomic, weak) void /* function */ trainingController;
@property (nonatomic, weak) void /* function */ delegate;

- (void)abort;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithPrimaryButtonTitle:(id)a0 secondaryButtonTitle:(id)a1 cancelButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (id)initWithTemplateView:(id)a0 primaryButtonTitle:(id)a1 secondaryButtonTitle:(id)a2 cancelButtonTitle:(id)a3;
- (id)initWithTrainingViewController:(id)a0;
- (void)trainingViewController:(id)a0 finishedTraining:(BOOL)a1;
- (void)trainingViewController:(id)a0 setVoiceTriggerUserEnabled:(BOOL)a1;
- (id)vtHostingView;

@end
