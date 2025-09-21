@class NSString;

@interface PXPeopleUISettings : PXSettings

@property (nonatomic) char alwaysShowBanner;
@property (nonatomic) long long debugBannerStyle;
@property (nonatomic) long long debugBannerAttribution;
@property (nonatomic) char ignoreNegativeSuggestionFeedback;
@property (nonatomic) long long negativeFeedbackWaitPeriodMinutes;
@property (nonatomic) char ignoreAttributionFiltering;
@property (copy, nonatomic) NSString *debugContactIdentifier;
@property (nonatomic) char mockProcessingUpdates;
@property (nonatomic) char mockEmptyContentUpdates;
@property (nonatomic) char alwaysShowMe;
@property (nonatomic) char useGridZeroForDetails;
@property (nonatomic) char debugFadeLayer;
@property (nonatomic) char showUUIDIfNoName;
@property (nonatomic) char enableReviewPhotosDemoMode;
@property (nonatomic) char useReviewPhotosMockDataSource;
@property (nonatomic) char showReviewPhotosObjectType;
@property (nonatomic) char forceReviewMorePhotosInterimLoading;
@property (nonatomic) char displayReviewMorePhotosSuggestionType;
@property (nonatomic) char displayReviewMorePhotosDate;
@property (nonatomic) char alwaysShowBootstrap;
@property (nonatomic) char enableBootstrapDemoMode;
@property (nonatomic) char useBootstrapMockDataSource;
@property (nonatomic) char displayBootstrapSuggestionType;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
