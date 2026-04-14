@class NSString, NSArray, NSData, SISchemaUUID;

@interface FLOWLINKSchemaFLOWLINKAction : SISchemaInstrumentationMessage {
    struct { unsigned char systemProtocol : 1; unsigned char presentationStyle : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *actionIdentifierName;
@property (nonatomic) BOOL hasActionIdentifierName;
@property (nonatomic) int systemProtocol;
@property (nonatomic) BOOL hasSystemProtocol;
@property (nonatomic) int presentationStyle;
@property (nonatomic) BOOL hasPresentationStyle;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)parametersCount;
- (id)initWithJSON:(id)a0;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)deleteSystemProtocol;
- (void)deleteActionIdentifierName;
- (void)deletePresentationStyle;
- (void)deleteParameters;

@end
