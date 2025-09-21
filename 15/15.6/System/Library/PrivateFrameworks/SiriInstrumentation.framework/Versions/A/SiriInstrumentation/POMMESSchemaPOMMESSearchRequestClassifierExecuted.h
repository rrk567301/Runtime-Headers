@class NSData;

@interface POMMESSchemaPOMMESSearchRequestClassifierExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char isPegasusSearchPerformed : 1; unsigned char mitigationResponseDecision : 1; } _has;
}

@property (nonatomic) char isPegasusSearchPerformed;
@property (nonatomic) char hasIsPegasusSearchPerformed;
@property (nonatomic) int mitigationResponseDecision;
@property (nonatomic) char hasMitigationResponseDecision;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPegasusSearchPerformed;
- (void)deleteMitigationResponseDecision;
- (id)suppressMessageUnderConditions;

@end
