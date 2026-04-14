@class POMMESSchemaPOMMESSiriPegasusMetadata, NSArray, NSString, POMMESSchemaPOMMESClientConversationMetadata, POMMESSchemaPOMMESPegasusQueryMetadata, NSData;

@interface POMMESSchemaPOMMESPegasusRequestArguments : SISchemaInstrumentationMessage {
    struct { unsigned char isDataOnlyRequest : 1; unsigned char conversationContextBytesLength : 1; } _has;
}

@property (copy, nonatomic) NSArray *queries;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusQueryMetadata *queryMetadata;
@property (nonatomic) BOOL hasQueryMetadata;
@property (copy, nonatomic) NSString *featureFlag;
@property (nonatomic) BOOL hasFeatureFlag;
@property (retain, nonatomic) POMMESSchemaPOMMESSiriPegasusMetadata *siriPegasusMetadata;
@property (nonatomic) BOOL hasSiriPegasusMetadata;
@property (nonatomic) BOOL isDataOnlyRequest;
@property (nonatomic) BOOL hasIsDataOnlyRequest;
@property (retain, nonatomic) POMMESSchemaPOMMESClientConversationMetadata *clientConversationMetadata;
@property (nonatomic) BOOL hasClientConversationMetadata;
@property (nonatomic) unsigned int conversationContextBytesLength;
@property (nonatomic) BOOL hasConversationContextBytesLength;
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
- (void)clearQueries;
- (void)deleteQueries;
- (void)addQueries:(id)a0;
- (unsigned long long)queriesCount;
- (id)queriesAtIndex:(unsigned long long)a0;
- (void)deleteQueryMetadata;
- (void)deleteFeatureFlag;
- (void)deleteSiriPegasusMetadata;
- (void)deleteIsDataOnlyRequest;
- (void)deleteClientConversationMetadata;
- (void)deleteConversationContextBytesLength;

@end
