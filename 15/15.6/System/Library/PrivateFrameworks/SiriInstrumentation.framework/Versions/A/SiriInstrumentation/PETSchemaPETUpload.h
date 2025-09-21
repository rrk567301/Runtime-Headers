@class PETSchemaPETMetadata, NSArray, NSData;

@interface PETSchemaPETUpload : SISchemaTopLevelUnionType {
    struct { unsigned char is_compressed : 1; } _has;
}

@property (retain, nonatomic) PETSchemaPETMetadata *metadata;
@property (nonatomic) char hasMetadata;
@property (copy, nonatomic) NSArray *aggregated_messages;
@property (copy, nonatomic) NSArray *unaggregated_messages;
@property (nonatomic) char is_compressed;
@property (nonatomic) char hasIs_compressed;
@property (copy, nonatomic) NSData *compressed_messages;
@property (nonatomic) char hasCompressed_messages;
@property (copy, nonatomic) NSArray *trial_messages;
@property (copy, nonatomic) NSData *compressed_data;
@property (nonatomic) char hasCompressed_data;
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
- (int)getAnyEventType;
- (void)addAggregated_messages:(id)a0;
- (void)addTrial_messages:(id)a0;
- (void)addUnaggregated_messages:(id)a0;
- (id)aggregated_messagesAtIndex:(unsigned long long)a0;
- (unsigned long long)aggregated_messagesCount;
- (void)clearAggregated_messages;
- (void)clearTrial_messages;
- (void)clearUnaggregated_messages;
- (void)deleteAggregated_messages;
- (void)deleteCompressed_data;
- (void)deleteCompressed_messages;
- (void)deleteIs_compressed;
- (void)deleteMetadata;
- (void)deleteTrial_messages;
- (void)deleteUnaggregated_messages;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (id)trial_messagesAtIndex:(unsigned long long)a0;
- (unsigned long long)trial_messagesCount;
- (id)unaggregated_messagesAtIndex:(unsigned long long)a0;
- (unsigned long long)unaggregated_messagesCount;

@end
