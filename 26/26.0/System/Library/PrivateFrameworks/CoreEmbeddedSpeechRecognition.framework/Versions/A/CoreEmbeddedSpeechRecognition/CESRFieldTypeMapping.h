@class NSString, CESRVocabularyLabel;

@interface CESRFieldTypeMapping : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fieldTypeName;
@property (readonly, nonatomic) CESRVocabularyLabel *vocabularyLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFieldTypeName:(id)a0 vocabularyLabel:(id)a1;

@end
