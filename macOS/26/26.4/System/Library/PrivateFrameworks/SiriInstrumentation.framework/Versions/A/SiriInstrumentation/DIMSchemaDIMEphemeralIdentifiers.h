@class NSData, SISchemaUUID;

@interface DIMSchemaDIMEphemeralIdentifiers : SISchemaInstrumentationMessage {
    struct { unsigned char secondsSinceEphemeralIdCreation : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) BOOL hasUserEphemeralId;
@property (retain, nonatomic) SISchemaUUID *homeEphemeralId;
@property (nonatomic) BOOL hasHomeEphemeralId;
@property (nonatomic) unsigned long long secondsSinceEphemeralIdCreation;
@property (nonatomic) BOOL hasSecondsSinceEphemeralIdCreation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHomeEphemeralId;
- (void)deleteSecondsSinceEphemeralIdCreation;
- (void)deleteUserEphemeralId;

@end
