@class NSString, CESRVocabularyLabel;

@interface CESRFieldTypeMapping : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fieldTypeName;
@property (readonly, nonatomic) CESRVocabularyLabel *vocabularyLabel;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFieldTypeName:(id)a0 vocabularyLabel:(id)a1;

@end
