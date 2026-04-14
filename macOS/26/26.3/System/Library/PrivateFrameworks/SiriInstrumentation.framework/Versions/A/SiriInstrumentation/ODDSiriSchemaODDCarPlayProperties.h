@class NSData;

@interface ODDSiriSchemaODDCarPlayProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isShowAppsBehindSiriEnabledOnCarPlay : 1; unsigned char isSiriCapableDigitalCarKeyAvailable : 1; } _has;
}

@property (nonatomic) BOOL isShowAppsBehindSiriEnabledOnCarPlay;
@property (nonatomic) BOOL hasIsShowAppsBehindSiriEnabledOnCarPlay;
@property (nonatomic) BOOL isSiriCapableDigitalCarKeyAvailable;
@property (nonatomic) BOOL hasIsSiriCapableDigitalCarKeyAvailable;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsShowAppsBehindSiriEnabledOnCarPlay;
- (void)deleteIsSiriCapableDigitalCarKeyAvailable;

@end
