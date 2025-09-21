@class NSArray;

@interface _WKTextManipulationConfiguration : NSObject

@property (copy, nonatomic) NSArray *exclusionRules;
@property (nonatomic) char includeSubframes;

- (void)dealloc;

@end
