@class NSData;

@interface STSchemaSTGlobalSearchResult : SISchemaInstrumentationMessage {
    struct { unsigned char STGlobalSearchResultId : 1; unsigned char requestType : 1; } _has;
}

@property (nonatomic) int STGlobalSearchResultId;
@property (nonatomic) BOOL hasSTGlobalSearchResultId;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteRequestType;
- (void)deleteSTGlobalSearchResultId;

@end
