@class FI_TNodeViewSettings;

@interface FI_TViewOptionsSettingsController : NSObject {
    struct TNSRef<FI_TNodeViewSettings, void> { FI_TNodeViewSettings *fRef; } _targetedViewOptionsSettings;
}

@property (retain, nonatomic) FI_TNodeViewSettings *targetedViewOptionsSettings;
@property (nonatomic) int viewStyleForViewOptions;
@property (nonatomic) BOOL shouldShowLibraryFolderButton;
@property (nonatomic) BOOL shouldShowLibraryFolder;
@property (nonatomic) BOOL shouldShowPreviewPane;

+ (id)sharedController;
+ (void)tearDownSharedController;

- (void).cxx_destruct;
- (id)_init;
- (id).cxx_construct;
- (id)targetedViewOptionsSettings;
- (void)setTargetedViewOptionsSettings:(id)a0;
- (void)setShouldShowPreviewPane:(BOOL)a0;
- (BOOL)shouldShowPreviewPane;

@end
