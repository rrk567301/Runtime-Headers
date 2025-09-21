@class NSData;

@interface ODDSiriSchemaODDCarPlayProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isShowAppsBehindSiriEnabledOnCarPlay : 1; unsigned char isSiriCapableDigitalCarKeyAvailable : 1; } _has;
}

@property (nonatomic) char isShowAppsBehindSiriEnabledOnCarPlay;
@property (nonatomic) char hasIsShowAppsBehindSiriEnabledOnCarPlay;
@property (nonatomic) char isSiriCapableDigitalCarKeyAvailable;
@property (nonatomic) char hasIsSiriCapableDigitalCarKeyAvailable;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsShowAppsBehindSiriEnabledOnCarPlay;
- (void)deleteIsSiriCapableDigitalCarKeyAvailable;
- (id)suppressMessageUnderConditions;

@end
