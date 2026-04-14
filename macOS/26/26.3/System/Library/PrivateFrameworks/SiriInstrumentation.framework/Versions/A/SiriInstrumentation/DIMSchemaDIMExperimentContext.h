@class NSArray, NSData;

@interface DIMSchemaDIMExperimentContext : SISchemaInstrumentationMessage {
    struct { unsigned char experimentalBucketId : 1; } _has;
}

@property (copy, nonatomic) NSArray *experimentInfos;
@property (nonatomic) unsigned int experimentalBucketId;
@property (nonatomic) BOOL hasExperimentalBucketId;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addExperimentInfo:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (unsigned long long)experimentInfoCount;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearExperimentInfo;
- (id)experimentInfoAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteExperimentInfo;
- (void)deleteExperimentalBucketId;

@end
