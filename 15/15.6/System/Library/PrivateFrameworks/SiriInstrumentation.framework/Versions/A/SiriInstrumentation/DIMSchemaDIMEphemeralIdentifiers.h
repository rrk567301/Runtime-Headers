@class NSData, SISchemaUUID;

@interface DIMSchemaDIMEphemeralIdentifiers : SISchemaInstrumentationMessage {
    struct { unsigned char secondsSinceEphemeralIdCreation : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) char hasUserEphemeralId;
@property (retain, nonatomic) SISchemaUUID *homeEphemeralId;
@property (nonatomic) char hasHomeEphemeralId;
@property (nonatomic) unsigned long long secondsSinceEphemeralIdCreation;
@property (nonatomic) char hasSecondsSinceEphemeralIdCreation;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHomeEphemeralId;
- (void)deleteSecondsSinceEphemeralIdCreation;
- (void)deleteUserEphemeralId;
- (id)suppressMessageUnderConditions;

@end
