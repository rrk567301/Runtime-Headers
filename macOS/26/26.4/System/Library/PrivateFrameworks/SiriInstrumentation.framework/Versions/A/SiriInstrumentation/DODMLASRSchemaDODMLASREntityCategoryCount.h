@class NSString, NSData;

@interface DODMLASRSchemaDODMLASREntityCategoryCount : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (copy, nonatomic) NSString *entityCategory;
@property (nonatomic) BOOL hasEntityCategory;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
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
- (void)deleteCount;
- (void)deleteEntityCategory;

@end
