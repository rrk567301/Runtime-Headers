@class NSArray, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentSessionSummary : SISchemaInstrumentationMessage {
    struct { unsigned char lastOpenedPageNumber : 1; unsigned char lastCompletedPage : 1; } _has;
}

@property (nonatomic) unsigned int lastOpenedPageNumber;
@property (nonatomic) BOOL hasLastOpenedPageNumber;
@property (nonatomic) unsigned int lastCompletedPage;
@property (nonatomic) BOOL hasLastCompletedPage;
@property (copy, nonatomic) NSArray *pageAttempts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addPageAttempts:(id)a0;
- (void)clearPageAttempts;
- (void)deleteLastCompletedPage;
- (void)deleteLastOpenedPageNumber;
- (void)deletePageAttempts;
- (id)pageAttemptsAtIndex:(unsigned long long)a0;
- (unsigned long long)pageAttemptsCount;

@end
