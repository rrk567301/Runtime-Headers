@class HMDResidentSelectionInfo, NSUUID, NSDictionary, HMDPreferredResidentsList, HMDHomeKitVersion, NSNumber;

@interface HMDUnpublishedResidentStatus : NSObject

@property (readonly, nonatomic) NSDictionary *channelRecordPayload;
@property (nonatomic) BOOL hasMigratedToDedicatedTopic;
@property (readonly, nonatomic) HMDHomeKitVersion *swVersion;
@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) HMDPreferredResidentsList *preferredResidentsList;
@property (readonly, nonatomic) NSNumber *locationRawValue;
@property (readonly, nonatomic) HMDResidentSelectionInfo *selectionInfo;
@property (readonly, nonatomic) unsigned long long networkConnectionType;
@property (readonly, nonatomic) BOOL hasReachableAccessories;

- (void).cxx_destruct;
- (id)description;
- (id)initWithVersion:(id)a0 generationID:(id)a1 preferredResidentsList:(id)a2 selectionInfo:(id)a3 connectionType:(unsigned long long)a4 locationRawValue:(id)a5 hasReachableAccessories:(BOOL)a6;

@end
