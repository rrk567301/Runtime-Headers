@class EDMessageCategorizationResultMetadata, EMCategory;

@interface EDMessageCategorizationResult : NSObject

@property (retain, nonatomic) EMCategory *category;
@property (copy, nonatomic) EDMessageCategorizationResultMetadata *metadata;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithCategory:(id)a0 metadata:(id)a1;

@end
