@class NSString, NSData;

@interface IFTSchemaIFTFollowUpActionExecutableActionLinkAction : SISchemaInstrumentationMessage {
    struct { unsigned char linkShowOutputActionOptions : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) unsigned long long linkShowOutputActionOptions;
@property (nonatomic) BOOL hasLinkShowOutputActionOptions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteBundleId;
- (void)deleteLinkShowOutputActionOptions;

@end
