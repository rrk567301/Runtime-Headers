@class NSString, PBUnknownFields;

@interface GEODailyUseSummaryUseEvent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_usageString;
    int _appType;
    unsigned int _count;
    int _eventType;
    char _usageBool;
    struct { unsigned char has_appType : 1; unsigned char has_count : 1; unsigned char has_eventType : 1; unsigned char has_usageBool : 1; } _flags;
}

@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) char hasAppType;
@property (nonatomic) int appType;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasUsageBool;
@property (nonatomic) char usageBool;
@property (readonly, nonatomic) char hasUsageString;
@property (retain, nonatomic) NSString *usageString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEventType:(id)a0;
- (int)StringAsAppType:(id)a0;
- (id)appTypeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)eventTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
