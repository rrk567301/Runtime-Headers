@class NSData;

@interface ODDSiriSchemaODDCarPlayProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isShowAppsBehindSiriEnabledOnCarPlay : 1; unsigned char isSiriCapableDigitalCarKeyAvailable : 1; } _has;
}

@property (nonatomic) BOOL isShowAppsBehindSiriEnabledOnCarPlay;
@property (nonatomic) BOOL hasIsShowAppsBehindSiriEnabledOnCarPlay;
@property (nonatomic) BOOL isSiriCapableDigitalCarKeyAvailable;
@property (nonatomic) BOOL hasIsSiriCapableDigitalCarKeyAvailable;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsShowAppsBehindSiriEnabledOnCarPlay;
- (void)deleteIsSiriCapableDigitalCarKeyAvailable;

@end
