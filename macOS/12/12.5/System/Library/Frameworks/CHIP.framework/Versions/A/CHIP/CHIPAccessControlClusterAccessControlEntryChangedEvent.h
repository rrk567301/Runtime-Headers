@class NSNumber, CHIPAccessControlClusterAccessControlEntry;

@interface CHIPAccessControlClusterAccessControlEntryChangedEvent : NSObject

@property (retain, nonatomic) NSNumber *adminNodeID;
@property (retain, nonatomic) NSNumber *adminPasscodeID;
@property (retain, nonatomic) NSNumber *changeType;
@property (retain, nonatomic) CHIPAccessControlClusterAccessControlEntry *latestValue;
@property (retain, nonatomic) NSNumber *adminFabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
