@interface _EARAlignmentState : NSObject <NSCopying>

@property (nonatomic) long long numberOfInsertions;
@property (nonatomic) long long numberOfDeletions;
@property (nonatomic) long long numberOfSubstitutions;
@property (nonatomic) long long totalCost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)incrementInsertions;
- (void)incrementDeletions;
- (void)incrementSubstitutions;
- (void)incrementCost;

@end
