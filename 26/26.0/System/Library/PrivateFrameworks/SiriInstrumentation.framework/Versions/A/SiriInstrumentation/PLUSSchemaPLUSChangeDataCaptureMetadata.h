@class NSData;

@interface PLUSSchemaPLUSChangeDataCaptureMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char operationType : 1; } _has;
}

@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasOperationType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteOperationType;

@end
