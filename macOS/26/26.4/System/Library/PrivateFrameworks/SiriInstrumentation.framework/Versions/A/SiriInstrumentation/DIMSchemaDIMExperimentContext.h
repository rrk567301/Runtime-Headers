@class NSArray, NSData;

@interface DIMSchemaDIMExperimentContext : SISchemaInstrumentationMessage {
    struct { unsigned char experimentalBucketId : 1; } _has;
}

@property (copy, nonatomic) NSArray *experimentInfos;
@property (nonatomic) unsigned int experimentalBucketId;
@property (nonatomic) BOOL hasExperimentalBucketId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)experimentInfoAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addExperimentInfo:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)experimentInfoCount;
- (void)clearExperimentInfo;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExperimentInfo;
- (void)deleteExperimentalBucketId;

@end
