@class NSString;

@interface FTMutableLatnnMitigatorResult : FTLatnnMitigatorResult

@property (nonatomic) BOOL processed;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) double threshold;
@property (nonatomic) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
