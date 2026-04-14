@class NSUUID, HMDStatusChannelRecord, HMDPreferredResidentsList, NSDate, HMDHomeKitVersion;

@interface HMDResidentStatus : NSObject

@property (readonly, nonatomic) HMDStatusChannelRecord *channelRecord;
@property (readonly, nonatomic) NSUUID *deviceID;
@property (readonly, nonatomic) HMDHomeKitVersion *swVersion;
@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) HMDPreferredResidentsList *preferredResidentsList;
@property (readonly, nonatomic) NSDate *assertionTime;
@property (readonly, nonatomic) BOOL isPrimary;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasChangedFrom:(id)a0;
- (id)initWithChannelRecord:(id)a0;
- (id)initWithDeviceID:(id)a0 version:(id)a1 generationID:(id)a2 assertionTime:(id)a3 preferredResidentsList:(id)a4;
- (id)initWithDeviceID:(id)a0 version:(id)a1 generationID:(id)a2 preferredResidentsList:(id)a3;

@end
