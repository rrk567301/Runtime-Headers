@class NSArray, POMMESSchemaPOMMESPegasusSearchQueryAmpUserState, NSData;

@interface POMMESSchemaPOMMESPegasusSearchQuery : SISchemaInstrumentationMessage {
    struct { unsigned char hasRewrittenUtterances : 1; unsigned char hasAudioQueueStateInfo : 1; } _has;
}

@property (nonatomic) char hasRewrittenUtterances;
@property (nonatomic) char hasHasRewrittenUtterances;
@property (copy, nonatomic) NSArray *userSpans;
@property (nonatomic) char hasAudioQueueStateInfo;
@property (nonatomic) char hasHasAudioQueueStateInfo;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusSearchQueryAmpUserState *ampUserState;
@property (nonatomic) char hasAmpUserState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addUserSpan:(id)a0;
- (void)clearUserSpan;
- (void)deleteAmpUserState;
- (void)deleteHasAudioQueueStateInfo;
- (void)deleteHasRewrittenUtterances;
- (void)deleteUserSpan;
- (id)suppressMessageUnderConditions;
- (id)userSpanAtIndex:(unsigned long long)a0;
- (unsigned long long)userSpanCount;

@end
