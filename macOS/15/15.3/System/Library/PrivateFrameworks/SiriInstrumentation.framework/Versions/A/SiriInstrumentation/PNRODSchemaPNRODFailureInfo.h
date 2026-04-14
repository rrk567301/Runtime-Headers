@class NSData;

@interface PNRODSchemaPNRODFailureInfo : SISchemaInstrumentationMessage {
    struct { unsigned char failureType : 1; unsigned char failureSubType : 1; } _has;
}

@property (nonatomic) long long failureType;
@property (nonatomic) BOOL hasFailureType;
@property (nonatomic) long long failureSubType;
@property (nonatomic) BOOL hasFailureSubType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFailureSubType;
- (void)deleteFailureType;
- (id)suppressMessageUnderConditions;

@end
