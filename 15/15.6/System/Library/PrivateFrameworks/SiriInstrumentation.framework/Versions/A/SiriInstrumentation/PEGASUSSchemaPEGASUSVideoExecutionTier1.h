@class NSArray, NSString, NSData;

@interface PEGASUSSchemaPEGASUSVideoExecutionTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isNlsResult : 1; } _has;
}

@property (copy, nonatomic) NSArray *resultEntityIds;
@property (copy, nonatomic) NSString *videoTitle;
@property (nonatomic) char hasVideoTitle;
@property (nonatomic) char isNlsResult;
@property (nonatomic) char hasIsNlsResult;
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
- (void)addResultEntityIds:(id)a0;
- (void)clearResultEntityIds;
- (void)deleteIsNlsResult;
- (void)deleteResultEntityIds;
- (void)deleteVideoTitle;
- (id)resultEntityIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)resultEntityIdsCount;
- (id)suppressMessageUnderConditions;

@end
