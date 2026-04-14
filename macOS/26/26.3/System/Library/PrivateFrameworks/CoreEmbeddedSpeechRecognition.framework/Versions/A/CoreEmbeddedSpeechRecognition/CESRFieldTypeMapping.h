@class NSString, CESRVocabularyLabel;

@interface CESRFieldTypeMapping : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fieldTypeName;
@property (readonly, nonatomic) CESRVocabularyLabel *vocabularyLabel;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFieldTypeName:(id)a0 vocabularyLabel:(id)a1;

@end
