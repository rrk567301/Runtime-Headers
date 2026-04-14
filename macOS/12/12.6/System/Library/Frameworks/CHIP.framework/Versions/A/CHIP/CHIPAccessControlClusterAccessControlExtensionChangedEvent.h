@class NSNumber, CHIPAccessControlClusterExtensionEntry;

@interface CHIPAccessControlClusterAccessControlExtensionChangedEvent : NSObject

@property (retain, nonatomic) NSNumber *adminNodeID;
@property (retain, nonatomic) NSNumber *adminPasscodeID;
@property (retain, nonatomic) NSNumber *changeType;
@property (retain, nonatomic) CHIPAccessControlClusterExtensionEntry *latestValue;
@property (retain, nonatomic) NSNumber *adminFabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
