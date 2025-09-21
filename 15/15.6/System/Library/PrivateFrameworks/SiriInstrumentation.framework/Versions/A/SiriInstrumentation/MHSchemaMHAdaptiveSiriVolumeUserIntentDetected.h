@class NSData;

@interface MHSchemaMHAdaptiveSiriVolumeUserIntentDetected : SISchemaInstrumentationMessage {
    struct { unsigned char userIntentType : 1; unsigned char userIntentVolume : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) int userIntentType;
@property (nonatomic) char hasUserIntentType;
@property (nonatomic) float userIntentVolume;
@property (nonatomic) char hasUserIntentVolume;
@property (nonatomic) char isPermanentOffsetEnabled;
@property (nonatomic) char hasIsPermanentOffsetEnabled;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) char hasPermanentOffsetFactor;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPermanentOffsetEnabled;
- (void)deletePermanentOffsetFactor;
- (void)deleteUserIntentType;
- (void)deleteUserIntentVolume;
- (id)suppressMessageUnderConditions;

@end
