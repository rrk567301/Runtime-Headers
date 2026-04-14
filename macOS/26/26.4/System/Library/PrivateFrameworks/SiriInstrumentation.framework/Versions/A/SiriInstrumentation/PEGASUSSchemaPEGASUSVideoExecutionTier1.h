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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResultEntityIds:(id)a0;
- (void)clearResultEntityIds;
- (void)deleteIsNlsResult;
- (void)deleteResultEntityIds;
- (void)deleteVideoTitle;
- (id)resultEntityIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)resultEntityIdsCount;

@end
