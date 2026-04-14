@class NSData;

@interface MHSchemaMHAdaptiveSiriVolumeUserIntentDetected : SISchemaInstrumentationMessage {
    struct { unsigned char userIntentType : 1; unsigned char userIntentVolume : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) int userIntentType;
@property (nonatomic) BOOL hasUserIntentType;
@property (nonatomic) float userIntentVolume;
@property (nonatomic) BOOL hasUserIntentVolume;
@property (nonatomic) BOOL isPermanentOffsetEnabled;
@property (nonatomic) BOOL hasIsPermanentOffsetEnabled;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) BOOL hasPermanentOffsetFactor;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsPermanentOffsetEnabled;
- (void)deletePermanentOffsetFactor;
- (void)deleteUserIntentType;
- (void)deleteUserIntentVolume;

@end
