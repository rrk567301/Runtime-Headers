@interface PoliciesPruningMO : PoliciesMO

@property (nonatomic) long long currentSize;
@property (nonatomic) long long limit;
@property (nonatomic) BOOL needsPruning;
@property (nonatomic) long long timeSinceLastPruning;

+ (id)fetchRequest;

@end
