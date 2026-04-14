@class NSArray, NSData;

@interface ASRSchemaASRNamedEntityUserEdit : SISchemaInstrumentationMessage {
    struct { unsigned char entityTaggerCategory : 1; unsigned char isNamedEntityPresentInVisualContext : 1; unsigned char isNamedEntityPresentInSpeechProfile : 1; } _has;
}

@property (nonatomic) int entityTaggerCategory;
@property (nonatomic) BOOL hasEntityTaggerCategory;
@property (nonatomic) BOOL isNamedEntityPresentInVisualContext;
@property (nonatomic) BOOL hasIsNamedEntityPresentInVisualContext;
@property (copy, nonatomic) NSArray *visualContextCategories;
@property (nonatomic) BOOL isNamedEntityPresentInSpeechProfile;
@property (nonatomic) BOOL hasIsNamedEntityPresentInSpeechProfile;
@property (copy, nonatomic) NSArray *speechProfileCategories;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)speechProfileCategoriesAtIndex:(unsigned long long)a0;
- (int)visualContextCategoriesAtIndex:(unsigned long long)a0;
- (void)addSpeechProfileCategories:(int)a0;
- (void)addVisualContextCategories:(int)a0;
- (void)clearSpeechProfileCategories;
- (void)clearVisualContextCategories;
- (void)deleteEntityTaggerCategory;
- (void)deleteIsNamedEntityPresentInSpeechProfile;
- (void)deleteIsNamedEntityPresentInVisualContext;
- (void)deleteSpeechProfileCategories;
- (void)deleteVisualContextCategories;
- (unsigned long long)speechProfileCategoriesCount;
- (unsigned long long)visualContextCategoriesCount;

@end
