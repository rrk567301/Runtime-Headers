@class NSString, SISchemaGridCardSection, NSData, SISchemaSiriResponseContext, SISchemaUUID;

@interface SISchemaUUFRShown : SISchemaInstrumentationMessage {
    struct { unsigned char siriUILocation : 1; unsigned char viewRegionDesignation : 1; unsigned char responseCategory : 1; } _has;
}

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) char hasViewID;
@property (copy, nonatomic) NSString *snippetClass;
@property (nonatomic) char hasSnippetClass;
@property (nonatomic) int siriUILocation;
@property (nonatomic) char hasSiriUILocation;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) char hasDialogIdentifier;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) char hasSiriResponseContext;
@property (copy, nonatomic) NSString *aceViewID;
@property (nonatomic) char hasAceViewID;
@property (copy, nonatomic) NSString *aceViewClass;
@property (nonatomic) char hasAceViewClass;
@property (nonatomic) int viewRegionDesignation;
@property (nonatomic) char hasViewRegionDesignation;
@property (retain, nonatomic) SISchemaGridCardSection *gridCardSection;
@property (nonatomic) char hasGridCardSection;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int responseCategory;
@property (nonatomic) char hasResponseCategory;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSubsection;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAceViewID;
- (void)deleteAceViewClass;
- (void)deleteDialogIdentifier;
- (void)deleteGridCardSection;
- (void)deleteLinkId;
- (void)deleteResponseCategory;
- (void)deleteSiriResponseContext;
- (void)deleteSiriUILocation;
- (void)deleteSnippetClass;
- (void)deleteSubRequestId;
- (void)deleteViewID;
- (void)deleteViewRegionDesignation;
- (id)suppressMessageUnderConditions;

@end
