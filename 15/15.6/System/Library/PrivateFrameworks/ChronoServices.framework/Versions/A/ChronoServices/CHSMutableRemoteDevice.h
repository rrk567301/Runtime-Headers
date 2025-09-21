@class NSString, NSUUID, NSDate;

@interface CHSMutableRemoteDevice : CHSRemoteDevice

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *relationshipID;
@property (copy, nonatomic) NSString *deviceID;
@property (nonatomic) long long currentSupportedVersion;
@property (nonatomic) long long minSupportedVersion;
@property (nonatomic) char isPossibleSource;
@property (nonatomic) long long pairingState;
@property (copy, nonatomic) NSDate *lastConnectionDate;

- (void)setName:(id)a0;
- (void)setDeviceID:(id)a0;
- (void)setPairingState:(long long)a0;
- (void)setCurrentSupportedVersion:(long long)a0;
- (void)setIsPossibleSource:(char)a0;
- (void)setLastConnectionDate:(id)a0;
- (void)setMinSupportedVersion:(long long)a0;
- (void)setRelationshipID:(id)a0;

@end
