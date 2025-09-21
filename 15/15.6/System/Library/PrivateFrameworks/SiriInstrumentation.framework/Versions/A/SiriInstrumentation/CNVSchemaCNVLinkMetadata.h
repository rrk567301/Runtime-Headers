@class NSString, NSData, SISchemaUUID;

@interface CNVSchemaCNVLinkMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char systemProtocol : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *linkActionId;
@property (nonatomic) char hasLinkActionId;
@property (nonatomic) int systemProtocol;
@property (nonatomic) char hasSystemProtocol;
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
- (void)deleteLinkActionId;
- (void)deleteLinkId;
- (void)deleteSystemProtocol;
- (id)suppressMessageUnderConditions;

@end
