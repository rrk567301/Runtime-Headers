@class NSNumber, NSArray;

@interface CHIPPowerProfileClusterPowerProfileResponseParams : NSObject

@property (retain, nonatomic) NSNumber *totalProfileNum;
@property (retain, nonatomic) NSNumber *powerProfileId;
@property (retain, nonatomic) NSNumber *numOfTransferredPhases;
@property (retain, nonatomic) NSArray *transferredPhases;

- (id)init;
- (void).cxx_destruct;

@end
