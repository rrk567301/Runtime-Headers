@class NSString;

@interface CESRVocabularyLabel : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *lmeTemplate;
@property (readonly, nonatomic) NSString *lmeTag;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLmeTemplate:(id)a0 lmeTag:(id)a1;

@end
