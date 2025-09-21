@class NSData;

@interface SISchemaSendWithoutConfirmation : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; unsigned char isEnabledForHeadphones : 1; unsigned char isEnabledForCarPlay : 1; } _has;
}

@property (nonatomic) char isEnabled;
@property (nonatomic) char hasIsEnabled;
@property (nonatomic) char isEnabledForHeadphones;
@property (nonatomic) char hasIsEnabledForHeadphones;
@property (nonatomic) char isEnabledForCarPlay;
@property (nonatomic) char hasIsEnabledForCarPlay;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEnabled;
- (void)deleteIsEnabledForCarPlay;
- (void)deleteIsEnabledForHeadphones;
- (id)suppressMessageUnderConditions;

@end
