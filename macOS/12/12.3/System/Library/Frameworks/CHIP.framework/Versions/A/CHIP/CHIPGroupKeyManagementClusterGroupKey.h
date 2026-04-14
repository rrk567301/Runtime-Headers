@class NSNumber, NSData;

@interface CHIPGroupKeyManagementClusterGroupKey : NSObject

@property (retain, nonatomic) NSNumber *vendorId;
@property (retain, nonatomic) NSNumber *groupKeyIndex;
@property (retain, nonatomic) NSData *groupKeyRoot;
@property (retain, nonatomic) NSNumber *groupKeyEpochStartTime;
@property (retain, nonatomic) NSNumber *groupKeySecurityPolicy;

- (id)init;
- (void).cxx_destruct;

@end
