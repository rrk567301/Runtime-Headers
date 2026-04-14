@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable <NSCopying> {
    struct { unsigned char widgetVisibleSectionsLimit : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *todaySectionConfigs;
@property (nonatomic) BOOL hasWidgetVisibleSectionsLimit;
@property (nonatomic) unsigned long long widgetVisibleSectionsLimit;

+ (Class)todaySectionConfigsType;

- (void)addTodaySectionConfigs:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)todaySectionConfigsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)todaySectionConfigsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTodaySectionConfigs;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
