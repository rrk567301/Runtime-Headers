@class NSData;

@interface INFERENCESchemaINFERENCESpeechAlternativeRanks : SISchemaInstrumentationMessage {
    struct { unsigned char isError : 1; unsigned char version : 1; unsigned char givenNameRank : 1; unsigned char middleNameRank : 1; unsigned char familyNameRank : 1; unsigned char fullNameRank : 1; } _has;
}

@property (nonatomic) char isError;
@property (nonatomic) char hasIsError;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int givenNameRank;
@property (nonatomic) char hasGivenNameRank;
@property (nonatomic) unsigned int middleNameRank;
@property (nonatomic) char hasMiddleNameRank;
@property (nonatomic) unsigned int familyNameRank;
@property (nonatomic) char hasFamilyNameRank;
@property (nonatomic) unsigned int fullNameRank;
@property (nonatomic) char hasFullNameRank;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFamilyNameRank;
- (void)deleteFullNameRank;
- (void)deleteGivenNameRank;
- (void)deleteIsError;
- (void)deleteMiddleNameRank;
- (void)deleteVersion;
- (id)suppressMessageUnderConditions;

@end
