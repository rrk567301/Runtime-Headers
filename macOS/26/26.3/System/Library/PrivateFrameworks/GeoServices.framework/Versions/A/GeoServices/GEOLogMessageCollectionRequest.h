@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_logMessages;
}

@property (retain, nonatomic) NSMutableArray *logMessages;

+ (Class)logMessageType;
+ (BOOL)isValid:(id)a0;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)logMessageAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)logMessagesCount;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)clearLogMessages;
- (void).cxx_destruct;
- (void)addLogMessage:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
