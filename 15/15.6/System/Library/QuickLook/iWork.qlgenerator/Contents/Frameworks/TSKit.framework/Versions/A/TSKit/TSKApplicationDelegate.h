@class TSKApplicationICloudPreferences, TSKApplicationPropertiesProvider, NSDate;

@interface TSKApplicationDelegate : NSObject

@property (class, readonly, nonatomic) TSKApplicationDelegate *sharedDelegate;
@property (class, readonly, nonatomic) TSKApplicationPropertiesProvider *sharedPropertiesProvider;
@property (class, readonly, nonatomic) TSKApplicationICloudPreferences *sharedICloudPreferences;

@property (readonly, nonatomic) char tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) char tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) char tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) char tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) char textInspectorShowsMoreSubpane;
@property (readonly, nonatomic) Class propertiesProviderClass;
@property (readonly, nonatomic) Class iCloudPreferencesProviderClass;
@property (readonly, getter=isActivating) char activating;
@property (readonly, getter=isInBackground) char inBackground;
@property (readonly, nonatomic) char performanceModeEnabled;
@property (readonly, nonatomic) char supportsPastingIntoGroups;
@property (readonly, nonatomic) char supportsFreehandAnimationUI;
@property (readonly, nonatomic) char supportsCommentsInMasters;
@property (readonly, nonatomic) char supportsLinkedTextBoxes;
@property (readonly, nonatomic) char imageGalleryCaptionsUsePlaceholderText;
@property (readonly, nonatomic) char supportsImageGalleryHyperlinks;
@property (readonly, nonatomic) char supportsMovieHyperlinks;
@property (readonly, nonatomic) char supportsHDRInteractiveCanvases;
@property (readonly, nonatomic) NSDate *applicationLaunchTime;

+ (void)initialize;
+ (id)documentDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (char)openURL:(id)a0;
- (char)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (char)shouldRenderContactShadow;
- (char)shouldRenderCurvedShadow;
- (char)supportsShrinkTextToFit;
- (char)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(char)a2;
- (char)supportsAutosizingTextboxes;
- (char)openURL:(id)a0 displayAlertOnError:(char)a1;
- (char)shouldRenderLargeImages;
- (void)configureSharedPropertiesProvider:(id)a0;
- (id)defaultEmailHyperlinkURL;
- (id)defaultPhoneHyperlinkURL;
- (id)defaultWebHyperlinkURL;
- (void)donateAddBodyRowAtBottomIntentWithInfo:(id)a0;
- (void)donateAddFormRecordIntentWithFormSheet:(id)a0;
- (void)p_setUpSharedICloudPreferences;
- (void)p_setUpSharedPropertiesProviderIfNeeded;
- (char)shouldValidateLayoutEngineWhileInsertingRows;

@end
