@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *upperBoundLocalDate;
@property (nonatomic) char usesLowRequirements;
@property (nonatomic) char oldMemory;

- (void).cxx_destruct;

@end
