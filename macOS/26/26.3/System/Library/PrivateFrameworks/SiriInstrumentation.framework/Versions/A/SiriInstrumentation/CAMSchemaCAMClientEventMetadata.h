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
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteRequestId;
- (void)deleteCamId;
- (void)deleteFeature;
- (void)deleteResultCandidateId;
- (void)deleteSubRequestId;
- (void)deleteTrpId;

@end
