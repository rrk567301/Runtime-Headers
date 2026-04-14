@class NSString, NSData;

@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    struct { unsigned char pommesConfidenceScore : 1; } _has;
}

@property (nonatomic) double pommesConfidenceScore;
@property (nonatomic) BOOL hasPommesConfidenceScore;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deletePegasusDomain;
- (void)deletePommesConfidenceScore;

@end
