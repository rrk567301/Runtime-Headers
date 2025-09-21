@class IFTSchemaIFTPermissionRequirement, IFTSchemaIFTAppRequirement, NSData, IFTSchemaIFTSystemRequirement;

@interface IFTSchemaIFTActionRequirement : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (nonatomic) char unsupported;
@property (nonatomic) char hasUnsupported;
@property (retain, nonatomic) IFTSchemaIFTAppRequirement *appRequirement;
@property (nonatomic) char hasAppRequirement;
@property (retain, nonatomic) IFTSchemaIFTPermissionRequirement *permissionRequirement;
@property (nonatomic) char hasPermissionRequirement;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirement *systemRequirement;
@property (nonatomic) char hasSystemRequirement;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Actionrequirement;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppRequirement;
- (void)deleteExists;
- (void)deletePermissionRequirement;
- (void)deleteSystemRequirement;
- (void)deleteUnsupported;
- (id)suppressMessageUnderConditions;

@end
