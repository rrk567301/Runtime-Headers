@class POMMESSchemaPOMMESSiriPegasusMetadata, NSArray, NSString, POMMESSchemaPOMMESClientConversationMetadata, POMMESSchemaPOMMESPegasusQueryMetadata, NSData;

@interface POMMESSchemaPOMMESPegasusRequestArguments : SISchemaInstrumentationMessage {
    struct { unsigned char isDataOnlyRequest : 1; unsigned char conversationContextBytesLength : 1; } _has;
}

@property (copy, nonatomic) NSArray *queries;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusQueryMetadata *queryMetadata;
@property (nonatomic) char hasQueryMetadata;
@property (copy, nonatomic) NSString *featureFlag;
@property (nonatomic) char hasFeatureFlag;
@property (retain, nonatomic) POMMESSchemaPOMMESSiriPegasusMetadata *siriPegasusMetadata;
@property (nonatomic) char hasSiriPegasusMetadata;
@property (nonatomic) char isDataOnlyRequest;
@property (nonatomic) char hasIsDataOnlyRequest;
@property (retain, nonatomic) POMMESSchemaPOMMESClientConversationMetadata *clientConversationMetadata;
@property (nonatomic) char hasClientConversationMetadata;
@property (nonatomic) unsigned int conversationContextBytesLength;
@property (nonatomic) char hasConversationContextBytesLength;
@property (copy, nonatomic) NSString *personalDomainFallback;
@property (nonatomic) char hasPersonalDomainFallback;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)queriesAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addQueries:(id)a0;
- (void)clearQueries;
- (void)deleteClientConversationMetadata;
- (void)deleteConversationContextBytesLength;
- (void)deleteFeatureFlag;
- (void)deleteIsDataOnlyRequest;
- (void)deletePersonalDomainFallback;
- (void)deleteQueries;
- (void)deleteQueryMetadata;
- (void)deleteSiriPegasusMetadata;
- (unsigned long long)queriesCount;
- (id)suppressMessageUnderConditions;

@end
