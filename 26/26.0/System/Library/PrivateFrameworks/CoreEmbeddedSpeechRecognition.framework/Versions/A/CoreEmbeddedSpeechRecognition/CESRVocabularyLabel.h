@class NSString;

@interface CESRVocabularyLabel : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *lmeTemplate;
@property (readonly, nonatomic) NSString *lmeTag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLmeTemplate:(id)a0 lmeTag:(id)a1;

@end
