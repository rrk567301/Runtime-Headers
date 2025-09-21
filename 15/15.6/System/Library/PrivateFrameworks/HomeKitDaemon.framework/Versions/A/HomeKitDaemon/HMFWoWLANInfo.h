@class NSData, NSArray, NSString;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *primaryMACAddress;
@property (readonly, nonatomic) NSArray *additionalMACAddresses;
@property (readonly, nonatomic) char supportsSleepConfig;
@property (readonly, nonatomic) unsigned short wakePort;
@property (retain, nonatomic) NSData *wakeAddress;
@property (readonly, nonatomic) long long wakeType;
@property (readonly, nonatomic) long long wakePacketType;
@property (readonly, nonatomic) unsigned char version;
@property (retain, nonatomic) NSData *wakePattern;
@property (readonly, nonatomic) NSString *wakeAddressString;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPrimaryIdentifier:(id)a0 wifiIdentifiers:(id)a1;
- (id)initWithWakeVersion:(unsigned char)a0 wakePort:(unsigned short)a1 wakeAddress:(id)a2 wakeType:(long long)a3 wakePacketType:(long long)a4 wakePattern:(id)a5;

@end
