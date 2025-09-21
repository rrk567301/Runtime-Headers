@class NSArray, NSData;

@interface DIMSchemaDIMExperimentContext : SISchemaInstrumentationMessage {
    struct { unsigned char experimentalBucketId : 1; } _has;
}

@property (copy, nonatomic) NSArray *experimentInfos;
@property (nonatomic) unsigned int experimentalBucketId;
@property (nonatomic) BOOL hasExperimentalBucketId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)addExperimentInfo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)experimentInfoAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)experimentInfoCount;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearExperimentInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteExperimentInfo;
- (void)deleteExperimentalBucketId;

@end
