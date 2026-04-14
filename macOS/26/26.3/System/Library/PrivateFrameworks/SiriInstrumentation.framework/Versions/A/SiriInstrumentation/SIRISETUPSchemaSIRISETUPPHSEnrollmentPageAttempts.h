@class NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentPageAttempts : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char numAttempts : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (nonatomic) unsigned int numAttempts;
@property (nonatomic) BOOL hasNumAttempts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteNumAttempts;
- (void)deletePageNumber;

@end
