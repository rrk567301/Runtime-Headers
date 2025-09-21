@class NSString, NSData;

@interface MHSchemaMHRTSFalseRejectDetected : SISchemaInstrumentationMessage {
    struct { unsigned char assetVersion : 1; } _has;
}

@property (nonatomic) unsigned int assetVersion;
@property (nonatomic) char hasAssetVersion;
@property (copy, nonatomic) NSString *gestureModelVersion;
@property (nonatomic) char hasGestureModelVersion;
@property (copy, nonatomic) NSString *audioModelVersion;
@property (nonatomic) char hasAudioModelVersion;
@property (copy, nonatomic) NSString *policyModelVersion;
@property (nonatomic) char hasPolicyModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetVersion;
- (void)deleteAudioModelVersion;
- (void)deleteGestureModelVersion;
- (void)deletePolicyModelVersion;
- (id)suppressMessageUnderConditions;

@end
