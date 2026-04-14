@class EDMessageCategorizationResultMetadata, EMCategory;

@interface EDMessageCategorizationResult : NSObject

@property (retain, nonatomic) EMCategory *category;
@property (copy, nonatomic) EDMessageCategorizationResultMetadata *metadata;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCategory:(id)a0 metadata:(id)a1;

@end
