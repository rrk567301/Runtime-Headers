@class NSString;

@interface CESRVocabularyLabel : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *lmeTemplate;
@property (readonly, nonatomic) NSString *lmeTag;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLmeTemplate:(id)a0 lmeTag:(id)a1;

@end
