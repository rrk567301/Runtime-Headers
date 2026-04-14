@class NSSet, MOBoolSettingMetadata, MOStringSetSettingMetadata, NSNumber;

@interface MOIntelligenceSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOStringSetSettingMetadata *allowedExternalIntelligenceWorkspaceIDsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAppleIntelligenceReportMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyExternalIntelligenceIntegrationsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyExternalIntelligenceIntegrationsSignInMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyGenmojiMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyImagePlaygroundMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyImageWandMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMailSmartRepliesMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMailSummaryMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyNotesTranscriptionMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyNotesTranscriptionSummaryMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyPersonalizedHandwritingResultsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySpotlightInternetResultsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyVisualIntelligenceSummaryMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyWritingToolsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *forceOnDeviceOnlyDictationMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *forceOnDeviceOnlyTranslationMetadata;

@property (retain, nonatomic) NSSet *allowedExternalIntelligenceWorkspaceIDs;
@property (retain, nonatomic) NSNumber *denyAppleIntelligenceReport;
@property (retain, nonatomic) NSNumber *denyExternalIntelligenceIntegrations;
@property (retain, nonatomic) NSNumber *denyExternalIntelligenceIntegrationsSignIn;
@property (retain, nonatomic) NSNumber *denyGenmoji;
@property (retain, nonatomic) NSNumber *denyImagePlayground;
@property (retain, nonatomic) NSNumber *denyImageWand;
@property (retain, nonatomic) NSNumber *denyMailSmartReplies;
@property (retain, nonatomic) NSNumber *denyMailSummary;
@property (retain, nonatomic) NSNumber *denyNotesTranscription;
@property (retain, nonatomic) NSNumber *denyNotesTranscriptionSummary;
@property (retain, nonatomic) NSNumber *denyPersonalizedHandwritingResults;
@property (retain, nonatomic) NSNumber *denySpotlightInternetResults;
@property (retain, nonatomic) NSNumber *denyVisualIntelligenceSummary;
@property (retain, nonatomic) NSNumber *denyWritingTools;
@property (retain, nonatomic) NSNumber *forceOnDeviceOnlyDictation;
@property (retain, nonatomic) NSNumber *forceOnDeviceOnlyTranslation;

+ (id)groupName;

@end
