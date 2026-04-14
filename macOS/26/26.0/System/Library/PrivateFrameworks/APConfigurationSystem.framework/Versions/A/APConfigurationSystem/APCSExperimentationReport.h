@class NSArray;

@interface APCSExperimentationReport : APConfiguration

@property (readonly, nonatomic) NSArray *reportSources;
@property (readonly, nonatomic) NSArray *reportingWindows;

+ (id)path;

@end
