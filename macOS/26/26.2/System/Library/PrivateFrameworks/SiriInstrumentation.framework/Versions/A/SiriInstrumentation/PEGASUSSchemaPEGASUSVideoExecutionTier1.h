@class NSArray, NSString, NSData;

@interface PEGASUSSchemaPEGASUSVideoExecutionTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isNlsResult : 1; } _has;
}

@property (copy, nonatomic) NSArray *resultEntityIds;
@property (copy, nonatomic) NSString *videoTitle;
@property (nonatomic) BOOL hasVideoTitle;
@property (nonatomic) BOOL isNlsResult;
@property (nonatomic) BOOL hasIsNlsResult;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addResultEntityIds:(id)a0;
- (void)clearResultEntityIds;
- (void)deleteIsNlsResult;
- (void)deleteResultEntityIds;
- (void)deleteVideoTitle;
- (id)resultEntityIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)resultEntityIdsCount;

@end
