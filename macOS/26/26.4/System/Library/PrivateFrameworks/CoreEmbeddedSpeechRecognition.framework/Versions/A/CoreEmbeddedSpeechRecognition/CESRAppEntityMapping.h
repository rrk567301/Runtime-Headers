@class NSString, NSDictionary, CESRVocabularyLabel;

@interface CESRAppEntityMapping : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) NSString *assistantSchemaType;
@property (readonly, nonatomic) NSString *appEntityName;
@property (readonly, nonatomic) CESRVocabularyLabel *primaryVocabLabel;
@property (readonly, nonatomic) NSDictionary *extractionVocabLabels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSourceBundleId:(id)a0 assistantSchemaType:(id)a1 appEntityName:(id)a2 primaryVocabLabel:(id)a3 extractionVocabLabels:(id)a4;

@end
