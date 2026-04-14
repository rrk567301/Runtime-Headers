@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_logMessages;
}

@property (retain, nonatomic) NSMutableArray *logMessages;

+ (BOOL)isValid:(id)a0;
+ (Class)logMessageType;

- (id)dictionaryRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addLogMessage:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned int)requestTypeCode;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (Class)responseClass;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)logMessageAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearLogMessages;
- (unsigned long long)logMessagesCount;
- (void)writeTo:(id)a0;

@end
