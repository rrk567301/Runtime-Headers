@class NSNumber, NSString, NSArray;

@interface APSLPPlacementConfig : APConfiguration

@property (readonly, nonatomic) NSNumber *isSlpRefactorDisabled;
@property (readonly, nonatomic) NSNumber *isSlpRefactorDisabled2;
@property (readonly, nonatomic) NSString *pcpfRequestUrl;
@property (readonly, nonatomic) NSNumber *pcpfDelay;
@property (readonly, nonatomic) NSArray *pcpfEnabledStorefronts;

+ (id)path;

@end
