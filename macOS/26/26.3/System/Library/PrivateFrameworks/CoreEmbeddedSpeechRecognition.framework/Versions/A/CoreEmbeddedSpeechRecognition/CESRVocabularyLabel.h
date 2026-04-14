@class NSString;

@interface CESRVocabularyLabel : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *lmeTemplate;
@property (readonly, nonatomic) NSString *lmeTag;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLmeTemplate:(id)a0 lmeTag:(id)a1;

@end
