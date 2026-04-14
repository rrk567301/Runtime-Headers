@class NSString, NSData, SISchemaUUID;

@interface STSchemaSTGeneralSearchResult : SISchemaInstrumentationMessage {
    struct { unsigned char resultType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *generalSearchResultId;
@property (nonatomic) BOOL hasGeneralSearchResultId;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBundleId;
- (void)deleteGeneralSearchResultId;
- (void)deleteResultType;

@end
