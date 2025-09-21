@class NSString, NSData;

@interface IFTSchemaIFTFollowUpActionExecutableActionLinkAction : SISchemaInstrumentationMessage {
    struct { unsigned char linkShowOutputActionOptions : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (nonatomic) unsigned long long linkShowOutputActionOptions;
@property (nonatomic) char hasLinkShowOutputActionOptions;
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
- (void)deleteBundleId;
- (void)deleteLinkShowOutputActionOptions;
- (id)suppressMessageUnderConditions;

@end
