@class NSString, NSData;
@protocol TSKCompatibilityDelegate;

@interface TSKApplicationPropertiesProvider : NSObject

@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *applicationDisplayName;
@property (readonly, nonatomic) NSString *nativeDocumentType;
@property (readonly, nonatomic) NSString *nativeDocumentExtension;
@property (readonly, nonatomic) NSString *documentShareURLScheme;
@property (readonly, nonatomic) NSString *documentTypeDisplayName;
@property (readonly, nonatomic) NSString *documentTypeDisplayNameForSharingInvitation;
@property (readonly, nonatomic) NSString *templateTypeDisplayName;
@property (readonly, nonatomic) Class documentRootClass;
@property (readonly, nonatomic) id<TSKCompatibilityDelegate> compatibilityDelegate;
@property (readonly, nonatomic) NSString *cloudKitSyncContainerIdentifier;
@property (readonly, nonatomic) NSString *bladerunnerContainerIdentifier;
@property (readonly, nonatomic) unsigned long long minimumAllowedDiffsPerProcessingCount;
@property (readonly, copy, nonatomic) id appTextDefaults;
@property (readonly, copy, nonatomic) NSData *iWorkTextDefaultsPassphraseVerifier;
@property (readonly, nonatomic) char designModeEnabled;
@property (readonly, nonatomic) char shouldDisallowDrawableCommandsWithoutParentInfo;
@property (readonly, nonatomic) char supportsWebVideos;
@property (readonly, nonatomic) char supportsChangeTracking;
@property (readonly, nonatomic) char supportsRTLColumns;
@property (readonly, nonatomic) unsigned long long webVideoRequiredDocumentWriteVersion;
@property (readonly, nonatomic) char requiresElevenOneDocumentReadWarningForObjectHyperlinks;
@property (readonly, nonatomic) char requiresFourOneDocumentReadWarningForInlineDrawables;
@property (readonly, nonatomic) char supportsFrehandAnimations;
@property (readonly, nonatomic) char shouldChartEditorTakeReadWriteLockForPreprocessChangesWorkaroundFor105413721;
@property (readonly, nonatomic) char shouldAdjustPositionAndSizeForMargins;
@property (readonly, nonatomic) char appCanReferToVisionPlatform;

- (void).cxx_destruct;
- (id)appChartPropertyOverrides;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (void)setAppTextDefaults:(id)a0 passphraseVerifier:(id)a1;
- (id)initWithCompatibilityDelegate:(id)a0;

@end
