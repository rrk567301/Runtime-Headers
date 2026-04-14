@class NSArray, POMMESSchemaPOMMESPegasusSearchQueryAmpUserState, NSData;

@interface POMMESSchemaPOMMESPegasusSearchQuery : SISchemaInstrumentationMessage {
    struct { unsigned char hasRewrittenUtterances : 1; unsigned char hasAudioQueueStateInfo : 1; } _has;
}

@property (nonatomic) BOOL hasRewrittenUtterances;
@property (nonatomic) BOOL hasHasRewrittenUtterances;
@property (copy, nonatomic) NSArray *userSpans;
@property (nonatomic) BOOL hasAudioQueueStateInfo;
@property (nonatomic) BOOL hasHasAudioQueueStateInfo;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusSearchQueryAmpUserState *ampUserState;
@property (nonatomic) BOOL hasAmpUserState;
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
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHasRewrittenUtterances;
- (void)clearUserSpan;
- (void)deleteUserSpan;
- (void)addUserSpan:(id)a0;
- (unsigned long long)userSpanCount;
- (id)userSpanAtIndex:(unsigned long long)a0;
- (void)deleteHasAudioQueueStateInfo;
- (void)deleteAmpUserState;

@end
