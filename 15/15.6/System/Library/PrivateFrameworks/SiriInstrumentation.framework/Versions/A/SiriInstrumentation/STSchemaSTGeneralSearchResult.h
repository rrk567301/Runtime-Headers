@class NSString, NSData, SISchemaUUID;

@interface STSchemaSTGeneralSearchResult : SISchemaInstrumentationMessage {
    struct { unsigned char resultType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *generalSearchResultId;
@property (nonatomic) char hasGeneralSearchResultId;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (nonatomic) int resultType;
@property (nonatomic) char hasResultType;
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
- (void)deleteBundleId;
- (void)deleteGeneralSearchResultId;
- (void)deleteResultType;
- (id)suppressMessageUnderConditions;

@end
