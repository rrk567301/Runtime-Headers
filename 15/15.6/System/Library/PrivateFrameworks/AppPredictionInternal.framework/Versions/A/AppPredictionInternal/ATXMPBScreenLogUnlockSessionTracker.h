@interface ATXMPBScreenLogUnlockSessionTracker : PBCodable <NSCopying> {
    struct { unsigned char numEngagementsInAppLibrary : 1; unsigned char numEngagementsInAppPredictionPanel : 1; unsigned char numEngagementsInAppPredictionPanelTodayPage : 1; unsigned char numEngagementsInSpotlightActions : 1; unsigned char numEngagementsInSpotlightApps : 1; unsigned char numEngagementsInSuggestionsWidget : 1; unsigned char numEngagementsInSuggestionsWidgetTodayPage : 1; unsigned char sessionLengthInSeconds : 1; unsigned char appLibraryEnabled : 1; unsigned char appLibraryViewed : 1; unsigned char appPredictionPanelEnabled : 1; unsigned char appPredictionPanelTodayPageEnabled : 1; unsigned char appPredictionPanelTodayPageViewed : 1; unsigned char appPredictionPanelViewed : 1; unsigned char spotlightActionsViewed : 1; unsigned char spotlightAppsViewed : 1; unsigned char spotlightEnabled : 1; unsigned char suggestionsWidgetEnabled : 1; unsigned char suggestionsWidgetTodayPageEnabled : 1; unsigned char suggestionsWidgetTodayPageViewed : 1; unsigned char suggestionsWidgetViewed : 1; } _has;
}

@property (nonatomic) char hasSessionLengthInSeconds;
@property (nonatomic) unsigned int sessionLengthInSeconds;
@property (nonatomic) char hasNumEngagementsInSpotlightApps;
@property (nonatomic) unsigned int numEngagementsInSpotlightApps;
@property (nonatomic) char hasNumEngagementsInSpotlightActions;
@property (nonatomic) unsigned int numEngagementsInSpotlightActions;
@property (nonatomic) char hasNumEngagementsInSuggestionsWidget;
@property (nonatomic) unsigned int numEngagementsInSuggestionsWidget;
@property (nonatomic) char hasNumEngagementsInAppPredictionPanel;
@property (nonatomic) unsigned int numEngagementsInAppPredictionPanel;
@property (nonatomic) char hasNumEngagementsInAppLibrary;
@property (nonatomic) unsigned int numEngagementsInAppLibrary;
@property (nonatomic) char hasSpotlightEnabled;
@property (nonatomic) char spotlightEnabled;
@property (nonatomic) char hasSuggestionsWidgetEnabled;
@property (nonatomic) char suggestionsWidgetEnabled;
@property (nonatomic) char hasAppPredictionPanelEnabled;
@property (nonatomic) char appPredictionPanelEnabled;
@property (nonatomic) char hasAppLibraryEnabled;
@property (nonatomic) char appLibraryEnabled;
@property (nonatomic) char hasSpotlightAppsViewed;
@property (nonatomic) char spotlightAppsViewed;
@property (nonatomic) char hasSpotlightActionsViewed;
@property (nonatomic) char spotlightActionsViewed;
@property (nonatomic) char hasSuggestionsWidgetViewed;
@property (nonatomic) char suggestionsWidgetViewed;
@property (nonatomic) char hasAppPredictionPanelViewed;
@property (nonatomic) char appPredictionPanelViewed;
@property (nonatomic) char hasAppLibraryViewed;
@property (nonatomic) char appLibraryViewed;
@property (nonatomic) char hasSuggestionsWidgetTodayPageViewed;
@property (nonatomic) char suggestionsWidgetTodayPageViewed;
@property (nonatomic) char hasAppPredictionPanelTodayPageViewed;
@property (nonatomic) char appPredictionPanelTodayPageViewed;
@property (nonatomic) char hasNumEngagementsInSuggestionsWidgetTodayPage;
@property (nonatomic) unsigned int numEngagementsInSuggestionsWidgetTodayPage;
@property (nonatomic) char hasNumEngagementsInAppPredictionPanelTodayPage;
@property (nonatomic) unsigned int numEngagementsInAppPredictionPanelTodayPage;
@property (nonatomic) char hasSuggestionsWidgetTodayPageEnabled;
@property (nonatomic) char suggestionsWidgetTodayPageEnabled;
@property (nonatomic) char hasAppPredictionPanelTodayPageEnabled;
@property (nonatomic) char appPredictionPanelTodayPageEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
