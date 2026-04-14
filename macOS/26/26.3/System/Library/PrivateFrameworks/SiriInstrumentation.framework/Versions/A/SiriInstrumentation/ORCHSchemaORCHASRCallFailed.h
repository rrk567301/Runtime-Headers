@class NSData;

@interface ORCHSchemaORCHASRCallFailed : SISchemaInstrumentationMessage {
    struct { unsigned char error : 1; } _has;
}

@property (nonatomic) int error;
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteError;

@end
