@class NSString, NSData;

@interface MHSchemaMHRTSFalseRejectDetected : SISchemaInstrumentationMessage {
    struct { unsigned char assetVersion : 1; } _has;
}

@property (nonatomic) unsigned int assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (copy, nonatomic) NSString *gestureModelVersion;
@property (nonatomic) BOOL hasGestureModelVersion;
@property (copy, nonatomic) NSString *audioModelVersion;
@property (nonatomic) BOOL hasAudioModelVersion;
@property (copy, nonatomic) NSString *policyModelVersion;
@property (nonatomic) BOOL hasPolicyModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAssetVersion;
- (void)deleteGestureModelVersion;
- (void)deleteAudioModelVersion;
- (void)deletePolicyModelVersion;

@end
