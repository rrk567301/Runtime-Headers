@class NSString, CESRVocabularyLabel;

@interface CESRFieldTypeMapping : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fieldTypeName;
@property (readonly, nonatomic) CESRVocabularyLabel *vocabularyLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFieldTypeName:(id)a0 vocabularyLabel:(id)a1;

@end
