@class NSString;

@interface ATXContextHeuristicsWeeklyStatisticsMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) char areSpotlightRecentsEnabled;
@property (nonatomic) char areSpotlightSuggestionsEnabled;
@property (nonatomic) unsigned long long numAppSuggestionsVisibleInSpotlight;
@property (nonatomic) unsigned long long numAppLibraryAppSuggestionTaps;
@property (nonatomic) unsigned long long numAppLibraryAppTaps;
@property (nonatomic) unsigned long long numHomescreenAppSuggestionTaps;
@property (nonatomic) unsigned long long numHomescreenAppTaps;
@property (nonatomic) unsigned long long numLeftOfHomeAppSuggestionTaps;
@property (nonatomic) unsigned long long numSpotlightAppSuggestionTaps;
@property (nonatomic) unsigned long long numSpotlightSearchAppTaps;
@property (nonatomic) unsigned long long numSpotlightActionSuggestionTaps;
@property (nonatomic) unsigned long long numRecentsTaps;
@property (nonatomic) unsigned long long numSpotlightSearches;
@property (nonatomic) unsigned long long numSpotlightViews;
@property (nonatomic) unsigned long long numSpotlightUniqueDayVisits;
@property (nonatomic) unsigned long long percentageOfTimeSpotlightActionSuggestionAvailable;
@property (nonatomic) unsigned long long numCalendarEvents;
@property (nonatomic) unsigned long long numCalendarEventsWithLink;
@property (nonatomic) unsigned long long numCalendarEventsWithLocation;
@property (copy, nonatomic) NSString *trialDeploymentId;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (copy, nonatomic) NSString *trialTreatmentId;
@property (copy, nonatomic) NSString *atxTrialDeploymentId;
@property (copy, nonatomic) NSString *atxTrialExperimentId;
@property (copy, nonatomic) NSString *atxTrialTreatmentId;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
