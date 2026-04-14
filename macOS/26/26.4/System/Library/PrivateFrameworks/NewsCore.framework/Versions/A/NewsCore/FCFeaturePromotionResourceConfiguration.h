@class NSString;

@interface FCFeaturePromotionResourceConfiguration : NSObject

@property (copy, nonatomic) NSString *resourceId;
@property (nonatomic) double timeToLive;
@property (nonatomic) double presentationDelay;
@property (nonatomic) double actionAutoDismissDelay;
@property (nonatomic) double globalQuiescenceInterval;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
