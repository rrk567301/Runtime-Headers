@class GATSchemaGATError, NSData;

@interface GATSchemaGATLoadScreenContentEventEnded : SISchemaInstrumentationMessage {
    struct { unsigned char originalMediaType : 1; unsigned char originalMediaSizeInKBs : 1; } _has;
}

@property (nonatomic) int originalMediaType;
@property (nonatomic) BOOL hasOriginalMediaType;
@property (nonatomic) double originalMediaSizeInKBs;
@property (nonatomic) BOOL hasOriginalMediaSizeInKBs;
@property (retain, nonatomic) GATSchemaGATError *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteOriginalMediaSizeInKBs;
- (void)deleteOriginalMediaType;
- (void)deleteUnderlyingError;

@end
