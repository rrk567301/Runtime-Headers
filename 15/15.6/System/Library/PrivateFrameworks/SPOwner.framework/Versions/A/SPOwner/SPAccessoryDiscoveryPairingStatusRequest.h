@class NSUUID;

@interface SPAccessoryDiscoveryPairingStatusRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char checkSerialNumber;
@property (nonatomic) char verifyFMNID;
@property (nonatomic) char verifyWithServer;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) char wantsLostModeInfo;

+ (id)checkSerialNumberWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
