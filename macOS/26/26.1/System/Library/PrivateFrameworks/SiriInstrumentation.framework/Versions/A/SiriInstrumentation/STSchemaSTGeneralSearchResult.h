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

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteBundleId;
- (void)deleteGeneralSearchResultId;
- (void)deleteResultType;

@end
