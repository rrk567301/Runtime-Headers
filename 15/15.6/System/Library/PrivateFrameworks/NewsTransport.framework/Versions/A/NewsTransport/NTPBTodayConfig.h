@class NSString, NSMutableArray, NTPBTodayBannerConfig;

@interface NTPBTodayConfig : PBCodable <NSCopying> {
    struct { unsigned char widgetSystemReloadInterval : 1; unsigned char widgetSystemReloadJitterMax : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *todayQueueConfigs;
@property (readonly, nonatomic) char hasBackgroundColorLight;
@property (retain, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) char hasBackgroundColorDark;
@property (retain, nonatomic) NSString *backgroundColorDark;
@property (readonly, nonatomic) char hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) char hasAudioIndicatorColor;
@property (retain, nonatomic) NSString *audioIndicatorColor;
@property (nonatomic) char hasWidgetSystemReloadInterval;
@property (nonatomic) long long widgetSystemReloadInterval;
@property (nonatomic) char hasWidgetSystemReloadJitterMax;
@property (nonatomic) long long widgetSystemReloadJitterMax;
@property (readonly, nonatomic) char hasWidgetBannerConfig;
@property (retain, nonatomic) NTPBTodayBannerConfig *widgetBannerConfig;

+ (Class)todayQueueConfigsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTodayQueueConfigs:(id)a0;
- (void)clearTodayQueueConfigs;
- (id)todayQueueConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)todayQueueConfigsCount;

@end
