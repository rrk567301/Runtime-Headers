@class NSData, NSString;

@interface NTPBTodayWidgetConfig : PBCodable <NSCopying> {
    struct { unsigned char minimumArticleExposureDurationToBePreseen : 1; unsigned char prerollLoadingTimeout : 1; unsigned char widgetSystemReloadInterval : 1; unsigned char widgetSystemReloadJitterMax : 1; unsigned char minimumNumberOfTimesPreseenToBeSeen : 1; unsigned char contentPrefetchEnabled : 1; unsigned char widgetBackgroundInteractionEnabled : 1; } _has;
}

@property (nonatomic) char hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) char hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) char hasPrerollLoadingTimeout;
@property (nonatomic) double prerollLoadingTimeout;
@property (readonly, nonatomic) char hasExternalAnalyticsConfigurationsData;
@property (retain, nonatomic) NSData *externalAnalyticsConfigurationsData;
@property (readonly, nonatomic) char hasBackgroundColorLight;
@property (retain, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) char hasBackgroundColorDark;
@property (retain, nonatomic) NSString *backgroundColorDark;
@property (nonatomic) char hasContentPrefetchEnabled;
@property (nonatomic) char contentPrefetchEnabled;
@property (readonly, nonatomic) char hasAudioIndicatorColor;
@property (retain, nonatomic) NSString *audioIndicatorColor;
@property (nonatomic) char hasWidgetSystemReloadInterval;
@property (nonatomic) long long widgetSystemReloadInterval;
@property (nonatomic) char hasWidgetSystemReloadJitterMax;
@property (nonatomic) long long widgetSystemReloadJitterMax;
@property (nonatomic) char hasWidgetBackgroundInteractionEnabled;
@property (nonatomic) char widgetBackgroundInteractionEnabled;

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
