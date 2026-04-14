@class NSString, NSData, SISchemaUUID;

@interface CNVSchemaCNVLinkMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char systemProtocol : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *linkActionId;
@property (nonatomic) BOOL hasLinkActionId;
@property (nonatomic) int systemProtocol;
@property (nonatomic) BOOL hasSystemProtocol;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteLinkActionId;
- (void)deleteLinkId;
- (void)deleteSystemProtocol;

@end
