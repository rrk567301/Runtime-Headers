@class NSString, NSData;

@interface STSchemaSTGlobalSearchResult : SISchemaInstrumentationMessage {
    struct { unsigned char STGlobalSearchResultId : 1; unsigned char requestType : 1; } _has;
}

@property (nonatomic) int STGlobalSearchResultId;
@property (nonatomic) BOOL hasSTGlobalSearchResultId;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestType;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePegasusDomain;
- (void)deleteRequestType;
- (void)deleteSTGlobalSearchResultId;

@end
