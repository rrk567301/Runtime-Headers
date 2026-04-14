@class NSString, NSData, SISchemaUUID;

@interface CAMSchemaCAMClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char feature : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *camId;
@property (nonatomic) BOOL hasCamId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) int feature;
@property (nonatomic) BOOL hasFeature;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCamId;
- (void)deleteResultCandidateId;
- (void)deleteFeature;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
