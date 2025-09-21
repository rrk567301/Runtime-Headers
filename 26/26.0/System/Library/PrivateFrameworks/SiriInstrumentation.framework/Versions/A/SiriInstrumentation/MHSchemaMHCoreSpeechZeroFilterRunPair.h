@class NSData;

@interface MHSchemaMHCoreSpeechZeroFilterRunPair : SISchemaInstrumentationMessage {
    struct { unsigned char zeroRunStartingSample : 1; unsigned char zeroRunLength : 1; } _has;
}

@property (nonatomic) unsigned long long zeroRunStartingSample;
@property (nonatomic) BOOL hasZeroRunStartingSample;
@property (nonatomic) unsigned long long zeroRunLength;
@property (nonatomic) BOOL hasZeroRunLength;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteZeroRunLength;
- (void)deleteZeroRunStartingSample;

@end
