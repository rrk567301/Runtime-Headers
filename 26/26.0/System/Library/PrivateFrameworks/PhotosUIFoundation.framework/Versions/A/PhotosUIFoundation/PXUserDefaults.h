@class NSString, NSDate, NSNumber;
@protocol PXUserDefaultsDataSource;

@interface PXUserDefaults : NSObject

@property (class, readonly, nonatomic) PXUserDefaults *standardUserDefaults;

@property (readonly, weak, nonatomic) id<PXUserDefaultsDataSource> dataSource;
@property (nonatomic) BOOL internalUIDisabled;
@property (copy, nonatomic) NSNumber *curatedLibraryZoomLevel;
@property (copy, nonatomic) NSNumber *daysMarginScale;
@property (copy, nonatomic) NSNumber *allPhotosCaptionsVisible;
@property (copy, nonatomic) NSNumber *allPhotosColumns;
@property (copy, nonatomic) NSNumber *allPhotosLibraryPreferredIndividualItemsColumns;
@property (copy, nonatomic) NSNumber *allPhotosAspectFit;
@property (copy, nonatomic) NSNumber *allPhotosAspectFitInCompact;
@property (copy, nonatomic) NSNumber *photosGridColumns;
@property (copy, nonatomic) NSNumber *photosGridPreferredIndividualItemsColumns;
@property (copy, nonatomic) NSNumber *photosGridAspectFit;
@property (copy, nonatomic) NSNumber *photosGridAspectFitInCompact;
@property (copy, nonatomic) NSNumber *searchPreferredIndividualItemsColumns;
@property (copy, nonatomic) NSNumber *didShowCurationFooter;
@property (copy, nonatomic) NSNumber *didShowCompletedCurationFooterAnimation;
@property (copy, nonatomic) NSNumber *includeScreenshots;
@property (copy, nonatomic) NSNumber *includeSharedWithYou;
@property (copy, nonatomic) NSNumber *includeFromMyMac;
@property (copy, nonatomic) NSNumber *lastRadarPromptAnsweredQuestionCount;
@property (copy, nonatomic) NSDate *lastSurveyQuestionsRadarPromptDate;
@property (copy, nonatomic) NSDate *surveyQuestionsHideDate;
@property (copy, nonatomic) NSString *infoPanelLastSnappedWidgetIdentifier;
@property (copy, nonatomic) NSNumber *infoPanelLastSnappedPosition;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setallPhotosAspectFitInCompact:(id)a0;

@end
