@class IFTSchemaIFTPermissionRequirement, IFTSchemaIFTAppRequirement, NSData, IFTSchemaIFTSystemRequirement;

@interface IFTSchemaIFTActionRequirement : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL unsupported;
@property (nonatomic) BOOL hasUnsupported;
@property (retain, nonatomic) IFTSchemaIFTAppRequirement *appRequirement;
@property (nonatomic) BOOL hasAppRequirement;
@property (retain, nonatomic) IFTSchemaIFTPermissionRequirement *permissionRequirement;
@property (nonatomic) BOOL hasPermissionRequirement;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirement *systemRequirement;
@property (nonatomic) BOOL hasSystemRequirement;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Actionrequirement;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAppRequirement;
- (void)deletePermissionRequirement;
- (void)deleteSystemRequirement;
- (void)deleteUnsupported;

@end
