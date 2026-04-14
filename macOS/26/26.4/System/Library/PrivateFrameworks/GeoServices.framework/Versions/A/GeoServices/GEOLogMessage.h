@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    struct { unsigned char has_groupRetryCount : 1; unsigned char has_logMessageType : 1; } _flags;
}

@property (nonatomic) BOOL hasGroupRetryCount;
@property (nonatomic) unsigned int groupRetryCount;
@property (retain, nonatomic) NSMutableArray *logMsgEvents;
@property (nonatomic) BOOL hasLogMessageType;
@property (nonatomic) int logMessageType;

+ (BOOL)isValid:(id)a0;
+ (Class)logMsgEventType;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)addLogMsgEvent:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)logMsgEventAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)logMsgEventsCount;
- (id)logMessageTypeAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearLogMsgEvents;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (int)StringAsLogMessageType:(id)a0;
- (id)initWithJSON:(id)a0;

@end
