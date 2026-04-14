@class NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentPageAttempts : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char numAttempts : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (nonatomic) unsigned int numAttempts;
@property (nonatomic) BOOL hasNumAttempts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteNumAttempts;
- (void)deletePageNumber;

@end
