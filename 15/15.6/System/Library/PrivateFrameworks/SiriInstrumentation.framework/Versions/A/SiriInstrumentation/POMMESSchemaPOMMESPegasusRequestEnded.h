@class POMMESSchemaPOMMESPegasusResponseServerDrivenContext, NSString, POMMESSchemaPOMMESPegasusRequestArguments, POMMESSchemaPOMMESPegasusRequestKfedLatency, NSData, POMMESSchemaPOMMESPegasusResponseClientDrivenContext;

@interface POMMESSchemaPOMMESPegasusRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char confidenceScore : 1; unsigned char payloadSizeInKB : 1; unsigned char isRewrittenUtteranceUsed : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (nonatomic) double confidenceScore;
@property (nonatomic) char hasConfidenceScore;
@property (nonatomic) double payloadSizeInKB;
@property (nonatomic) char hasPayloadSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseServerDrivenContext *serverDriven;
@property (nonatomic) char hasServerDriven;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseClientDrivenContext *clientDriven;
@property (nonatomic) char hasClientDriven;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) char hasPegasusDomain;
@property (nonatomic) char isRewrittenUtteranceUsed;
@property (nonatomic) char hasIsRewrittenUtteranceUsed;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *requestArguments;
@property (nonatomic) char hasRequestArguments;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestKfedLatency *kfedLatency;
@property (nonatomic) char hasKfedLatency;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteClientDriven;
- (void)deleteConfidenceScore;
- (void)deleteIsRewrittenUtteranceUsed;
- (void)deleteKfedLatency;
- (void)deletePayloadSizeInKB;
- (void)deletePegasusDomain;
- (void)deleteRequestArguments;
- (void)deleteServerDriven;
- (void)deleteStatus;
- (id)suppressMessageUnderConditions;

@end
