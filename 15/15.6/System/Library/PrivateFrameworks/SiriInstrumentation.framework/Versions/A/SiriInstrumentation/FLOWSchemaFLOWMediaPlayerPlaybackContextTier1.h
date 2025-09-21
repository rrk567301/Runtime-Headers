@class NSString, NSArray, USOSchemaUSOGraph, SISchemaUUID, USOSchemaUSOGraphTier1, NSData;

@interface FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char adamId : 1; unsigned char isNlsResult : 1; unsigned char isNlsContainerResult : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *contentTitle;
@property (nonatomic) char hasContentTitle;
@property (nonatomic) unsigned int adamId;
@property (nonatomic) char hasAdamId;
@property (copy, nonatomic) NSString *adamIdString;
@property (nonatomic) char hasAdamIdString;
@property (copy, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) USOSchemaUSOGraph *u2UsoGraph;
@property (nonatomic) char hasU2UsoGraph;
@property (retain, nonatomic) USOSchemaUSOGraphTier1 *u2UsoGraphTier1;
@property (nonatomic) char hasU2UsoGraphTier1;
@property (nonatomic) char isNlsResult;
@property (nonatomic) char hasIsNlsResult;
@property (nonatomic) char isNlsContainerResult;
@property (nonatomic) char hasIsNlsContainerResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSearchResults:(id)a0;
- (void)clearSearchResults;
- (id)initWithJSON:(id)a0;
- (id)searchResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchResultsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAdamId;
- (void)deleteAdamIdString;
- (void)deleteContentTitle;
- (void)deleteIsNlsContainerResult;
- (void)deleteIsNlsResult;
- (void)deleteLinkId;
- (void)deleteSearchResults;
- (void)deleteU2UsoGraph;
- (void)deleteU2UsoGraphTier1;
- (id)suppressMessageUnderConditions;

@end
