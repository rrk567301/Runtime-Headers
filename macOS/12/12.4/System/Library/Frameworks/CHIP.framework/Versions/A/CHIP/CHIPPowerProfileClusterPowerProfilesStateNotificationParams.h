@class NSNumber, NSArray;

@interface CHIPPowerProfileClusterPowerProfilesStateNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileCount;
@property (retain, nonatomic) NSArray *powerProfileRecords;

- (id)init;
- (void).cxx_destruct;

@end
