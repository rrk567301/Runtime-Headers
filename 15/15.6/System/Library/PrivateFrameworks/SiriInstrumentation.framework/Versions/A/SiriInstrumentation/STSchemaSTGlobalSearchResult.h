@class NSData;

@interface STSchemaSTGlobalSearchResult : SISchemaInstrumentationMessage {
    struct { unsigned char STGlobalSearchResultId : 1; unsigned char requestType : 1; } _has;
}

@property (nonatomic) int STGlobalSearchResultId;
@property (nonatomic) char hasSTGlobalSearchResultId;
@property (nonatomic) int requestType;
@property (nonatomic) char hasRequestType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestType;
- (void)deleteSTGlobalSearchResultId;
- (id)suppressMessageUnderConditions;

@end
