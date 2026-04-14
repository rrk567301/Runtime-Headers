@interface EMTAlignmentProcessorOptions : NSObject

@property (nonatomic) BOOL wordLevelAlignments;
@property (nonatomic) BOOL avoidCrossingWords;
@property (nonatomic) BOOL useStrippedTokenText;

+ (id)defaultOptions;

@end
