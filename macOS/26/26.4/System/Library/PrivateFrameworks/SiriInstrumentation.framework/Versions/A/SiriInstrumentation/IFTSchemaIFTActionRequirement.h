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

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppRequirement;
- (void)deletePermissionRequirement;
- (void)deleteSystemRequirement;
- (void)deleteUnsupported;

@end
