@class NSArray;

@interface DEMatchCriteria : NSObject

@property (retain, nonatomic) NSArray *prefixes;
@property (retain, nonatomic) NSArray *suffixes;

+ (id)matchCriteriaFromPb:(const void *)a0;
+ (void)matchCriteriaToPb:(id)a0 matchCriteriaPb:(void *)a1;

- (BOOL)all:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)any:(id)a0;
- (id)init;
- (id)initWithPrefixes:(id)a0 suffixes:(id)a1;

@end
