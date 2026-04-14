@class NSData;

@interface PLUSSchemaPLUSChangeDataCaptureMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char operationType : 1; } _has;
}

@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasOperationType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteOperationType;

@end
