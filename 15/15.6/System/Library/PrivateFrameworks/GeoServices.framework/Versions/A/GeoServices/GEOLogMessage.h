@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    struct { unsigned char has_groupRetryCount : 1; unsigned char has_logMessageType : 1; } _flags;
}

@property (nonatomic) char hasGroupRetryCount;
@property (nonatomic) unsigned int groupRetryCount;
@property (retain, nonatomic) NSMutableArray *logMsgEvents;
@property (nonatomic) char hasLogMessageType;
@property (nonatomic) int logMessageType;

+ (Class)logMsgEventType;
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
- (int)StringAsLogMessageType:(id)a0;
- (void)addLogMsgEvent:(id)a0;
- (void)clearLogMsgEvents;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)logMessageTypeAsString:(int)a0;
- (id)logMsgEventAtIndex:(unsigned long long)a0;
- (unsigned long long)logMsgEventsCount;
- (void)readAll:(char)a0;

@end
