@class NSArray, NSData;

@interface DIMSchemaDIMExperimentContext : SISchemaInstrumentationMessage {
    struct { unsigned char experimentalBucketId : 1; } _has;
}

@property (copy, nonatomic) NSArray *experimentInfos;
@property (nonatomic) unsigned int experimentalBucketId;
@property (nonatomic) char hasExperimentalBucketId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addExperimentInfo:(id)a0;
- (void)clearExperimentInfo;
- (id)experimentInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)experimentInfoCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExperimentInfo;
- (void)deleteExperimentalBucketId;
- (id)suppressMessageUnderConditions;

@end
