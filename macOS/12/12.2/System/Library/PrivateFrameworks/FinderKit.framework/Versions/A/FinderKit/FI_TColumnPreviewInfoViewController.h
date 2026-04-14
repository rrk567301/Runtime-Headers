@class NSStackView, FI_TColumnPreviewPropertyTaggingTokenFieldController, FI_TPropertyShortVersionController, FI_TTitleAndValueView, NSObject, FI_TPropertyColumnPreviewCreationDateController, FI_TTextField, FI_TPropertyColumnPreviewModificationDateController, FI_TPreviewOptions, FI_TButton, FI_TColumnPreviewSpotlightMetaDataController, FI_TPropertyICloudShareOwnerController, NSLayoutConstraint, NSArray, NSIndexSet, FI_TPropertyColumnPreviewLastOpenedDateController, FI_TKeyValueObserverGlue;

@interface FI_TColumnPreviewInfoViewController : FI_TBaseInfoWindowViewController {
    FI_TPropertyICloudShareOwnerController *_iCloudShareOwnerController;
    FI_TPropertyColumnPreviewCreationDateController *_createDateController;
    FI_TPropertyColumnPreviewModificationDateController *_modDateController;
    FI_TPropertyColumnPreviewLastOpenedDateController *_lastOpenedDateController;
    FI_TPropertyShortVersionController *_versionController;
    FI_TColumnPreviewSpotlightMetaDataController *_spotlightMetaDataController;
    FI_TColumnPreviewPropertyTaggingTokenFieldController *_taggingController;
    NSStackView *_stackView;
    FI_TButton *_expandButton;
    FI_TTextField *_informationTextFld;
    FI_TTitleAndValueView *_sharedByTitleAndValueView;
    FI_TTitleAndValueView *_createdTitleAndValueView;
    FI_TTitleAndValueView *_modifiedTitleAndValueView;
    FI_TTitleAndValueView *_lastOpenedTitleAndValueView;
    FI_TTitleAndValueView *_versionTitleAndValueView;
    FI_TTextField *_tagsTextFld;
    NSLayoutConstraint *_informationTextFldTopConstraint;
    NSLayoutConstraint *_informationTextFldBottomConstraint;
    NSLayoutConstraint *_tagsTextFldTopConstraint;
    NSLayoutConstraint *_tagsTextFldBottomConstraint;
    BOOL _isRetargeting;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _activeOptionsObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _filteredDeltaDidChange;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _arrangedMetadataViewDidChange;
    struct TriStateBool { int fState; } _wasCollapsedBeforeEditing;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _editingOptionsObserver;
}

@property (retain, nonatomic) FI_TPreviewOptions *previewOptions;
@property (readonly, nonatomic) BOOL shouldBeVisible;
@property (nonatomic) BOOL showSmallThumbnail;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)refresh;
- (void)configureView;
- (void)configureMinRowCount:(double)a0 maxRowCount:(double)a1;
- (void)loadValueControllers;
- (void)targetNodesChanging;
- (void)targetNodesChanged;
- (unsigned int)notificationOptionsForNodes:(const void *)a0;
- (void)updateFilters;
- (void)updateConstraintsForSmallThumbnail;
- (void)configureExpandingButton;
- (id)addConstraintsToAvoidOverlapsInStackViewAnimations;
- (void)configureForEditing:(BOOL)a0;
- (void)applyPreviewOptions;
- (BOOL)canShowMoreOrLess;
- (long long)possibleHiddenAttributes;
- (void)updateSeparatorsInStackViews;
- (void)userSelectedKeysDidChange;
- (void)optionsDidChangeEditMode;
- (void)updateExpandButtonState;
- (void)expandToggle:(id)a0;

@end
