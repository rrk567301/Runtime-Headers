@class NSString, NSArray, NSData, SISchemaUUID;

@interface FLOWLINKSchemaFLOWLINKAction : SISchemaInstrumentationMessage {
    struct { unsigned char systemProtocol : 1; unsigned char presentationStyle : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *actionIdentifierName;
@property (nonatomic) char hasActionIdentifierName;
@property (nonatomic) int systemProtocol;
@property (nonatomic) char hasSystemProtocol;
@property (nonatomic) int presentationStyle;
@property (nonatomic) char hasPresentationStyle;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionIdentifierName;
- (void)deleteLinkId;
- (void)deleteParameters;
- (void)deletePresentationStyle;
- (void)deleteSystemProtocol;
- (id)suppressMessageUnderConditions;

@end
