@class NSString;

@interface NTPBWidgetConfig : PBCodable <NSCopying> {
    struct { unsigned char alternativeButlerWidgetConfigPopulationCeiling : 1; unsigned char alternativeButlerWidgetConfigPopulationFloor : 1; unsigned char articleListBackgroundMinimumUpdateInterval : 1; unsigned char articleListForegroundMinimumUpdateInterval : 1; unsigned char backgroundMinimumUpdateInterval : 1; unsigned char forYouBackgroundMinimumUpdateInterval : 1; unsigned char forYouCutoffTime : 1; unsigned char forYouForegroundMinimumUpdateInterval : 1; unsigned char foregroundMinimumUpdateInterval : 1; unsigned char minimumArticleExposureDurationToBePreseen : 1; unsigned char parsecPopulationCeiling : 1; unsigned char parsecPopulationFloor : 1; unsigned char parsecTrendingCutoffTime : 1; unsigned char topStoriesBackgroundMinimumUpdateInterval : 1; unsigned char topStoriesCutoffTime : 1; unsigned char topStoriesForegroundMinimumUpdateInterval : 1; unsigned char trendingBackgroundMinimumUpdateInterval : 1; unsigned char trendingByParsecBackgroundMinimumUpdateInterval : 1; unsigned char trendingByParsecForegroundMinimumUpdateInterval : 1; unsigned char trendingCutoffTime : 1; unsigned char trendingForegroundMinimumUpdateInterval : 1; unsigned char widgetSectionConfigBackgroundMinimumUpdateInterval : 1; unsigned char widgetSectionConfigForegroundMinimumUpdateInterval : 1; unsigned char enabledSections : 1; unsigned char minimumNumberOfTimesPreseenToBeSeen : 1; } _has;
}

@property (nonatomic) char hasTopStoriesCutoffTime;
@property (nonatomic) long long topStoriesCutoffTime;
@property (nonatomic) char hasForYouCutoffTime;
@property (nonatomic) long long forYouCutoffTime;
@property (nonatomic) char hasTrendingCutoffTime;
@property (nonatomic) long long trendingCutoffTime;
@property (nonatomic) char hasEnabledSections;
@property (nonatomic) unsigned int enabledSections;
@property (nonatomic) char hasParsecPopulationFloor;
@property (nonatomic) double parsecPopulationFloor;
@property (nonatomic) char hasParsecPopulationCeiling;
@property (nonatomic) double parsecPopulationCeiling;
@property (nonatomic) char hasForegroundMinimumUpdateInterval;
@property (nonatomic) long long foregroundMinimumUpdateInterval;
@property (nonatomic) char hasBackgroundMinimumUpdateInterval;
@property (nonatomic) long long backgroundMinimumUpdateInterval;
@property (nonatomic) char hasTopStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) char hasTopStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) char hasForYouForegroundMinimumUpdateInterval;
@property (nonatomic) long long forYouForegroundMinimumUpdateInterval;
@property (nonatomic) char hasForYouBackgroundMinimumUpdateInterval;
@property (nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic) char hasTrendingForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingForegroundMinimumUpdateInterval;
@property (nonatomic) char hasTrendingBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingBackgroundMinimumUpdateInterval;
@property (nonatomic) char hasAlternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) char hasAlternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) char hasParsecTrendingCutoffTime;
@property (nonatomic) long long parsecTrendingCutoffTime;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasArticleListForegroundMinimumUpdateInterval;
@property (nonatomic) long long articleListForegroundMinimumUpdateInterval;
@property (nonatomic) char hasArticleListBackgroundMinimumUpdateInterval;
@property (nonatomic) long long articleListBackgroundMinimumUpdateInterval;
@property (nonatomic) char hasTrendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) char hasTrendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) char hasWidgetSectionConfigForegroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigForegroundMinimumUpdateInterval;
@property (nonatomic) char hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) char hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) char hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
