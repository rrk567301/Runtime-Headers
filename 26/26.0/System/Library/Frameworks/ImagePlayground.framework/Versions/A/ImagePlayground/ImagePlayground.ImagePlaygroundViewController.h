@class NSImage, NSString, GPRecipe;
@protocol _TtP15ImagePlayground44ImageGenerationViewControllerPrivateDelegate_;

@interface ImagePlayground.ImagePlaygroundViewController : NSViewController {
    void /* unknown type, empty encoding */ __promptElements;
    void /* unknown type, empty encoding */ allowedGenerationStyles;
    void /* unknown type, empty encoding */ selectedGenerationStyle;
    void /* unknown type, empty encoding */ personalizationPolicy;
    void /* unknown type, empty encoding */ sceneIdentifier;
    void /* unknown type, empty encoding */ resultingAssets;
    void /* function */ localizedCreateButtonTitle;
    void /* unknown type, empty encoding */ previewAspectRatio;
    void /* unknown type, empty encoding */ pregeneratedImage;
    void /* unknown type, empty encoding */ imageImportPolicy;
    void /* unknown type, empty encoding */ responsibleAuditToken;
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ imageEditionView;
    void /* unknown type, empty encoding */ imageEditionViewController;
    void /* unknown type, empty encoding */ concepts;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic, retain) NSImage *sourceImage;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) id<_TtP15ImagePlayground44ImageGenerationViewControllerPrivateDelegate_> privateDelegate;
@property (nonatomic) BOOL sourceImageIsSketch;
@property (nonatomic, copy) NSString *localizedCreateButtonTitle;
@property (nonatomic) BOOL isLoadingRecipe;
@property (nonatomic, retain) GPRecipe *recipe;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)editorDidCancelWithRequiresShowingGrid:(BOOL)a0;
- (void)editorDidGenerateAssets:(id)a0;

@end
