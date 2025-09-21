@class NSData, NSNumber;

@interface HMDSharedHomeModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSData *homeData;
@property (retain, nonatomic) NSNumber *configurationVersion;

+ (id)properties;

- (char)isReplayable;

@end
