@class NSData;

@interface NLXSchemaCDMCorrectionOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char correctionType : 1; } _has;
}

@property (nonatomic) int correctionType;
@property (nonatomic) BOOL hasCorrectionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteCorrectionType;

@end
