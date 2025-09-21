@class NSString, USOSchemaUSOGraph, NSArray, SISchemaUUID, NLXSchemaCDMInternalSpanData, NSData;

@interface NLXSchemaCDMMatchingSpan : SISchemaInstrumentationMessage {
    struct { unsigned char startTokenIndex : 1; unsigned char endTokenIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) char hasLabel;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) unsigned int startTokenIndex;
@property (nonatomic) char hasStartTokenIndex;
@property (nonatomic) unsigned int endTokenIndex;
@property (nonatomic) char hasEndTokenIndex;
@property (retain, nonatomic) USOSchemaUSOGraph *usoGraph;
@property (nonatomic) char hasUsoGraph;
@property (copy, nonatomic) NSArray *matcherNames;
@property (retain, nonatomic) NLXSchemaCDMInternalSpanData *internalSpanData;
@property (nonatomic) char hasInternalSpanData;
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
- (void)addMatcherNames:(int)a0;
- (void)clearMatcherNames;
- (void)deleteEndTokenIndex;
- (void)deleteInternalSpanData;
- (void)deleteLabel;
- (void)deleteLinkId;
- (void)deleteMatcherNames;
- (void)deleteStartTokenIndex;
- (void)deleteUsoGraph;
- (int)matcherNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)matcherNamesCount;
- (id)suppressMessageUnderConditions;

@end
