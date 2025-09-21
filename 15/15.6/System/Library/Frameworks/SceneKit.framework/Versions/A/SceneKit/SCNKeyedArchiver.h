@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver

@property (nonatomic) char skipMorphTargets;
@property (copy, nonatomic) NSDictionary *options;

+ (id)archivedDataWithRootObject:(id)a0 options:(id)a1;

- (void)dealloc;

@end
