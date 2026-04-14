@class NSUUID, SKPresencePayload, NSDictionary, NSDate;

@interface HMDStatusChannelRecord : NSObject

@property (readonly, nonatomic) SKPresencePayload *presencePayload;
@property (readonly, nonatomic) NSUUID *deviceID;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSDate *assertionTime;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updatePayload:(id)a0;
- (id)initWithDeviceID:(id)a0 payload:(id)a1;
- (id)initWithDeviceID:(id)a0 payload:(id)a1 assertionTime:(id)a2;
- (id)initWithPresencePayload:(id)a0 assertionTime:(id)a1;

@end
