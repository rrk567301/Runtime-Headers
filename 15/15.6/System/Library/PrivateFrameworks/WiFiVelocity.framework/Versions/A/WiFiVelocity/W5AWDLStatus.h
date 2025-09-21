@class NSString, NSArray, NSData;

@interface W5AWDLStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *macAddress;
@property (copy, nonatomic) NSString *hardwareMACAddress;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSArray *ipv6Addresses;
@property (nonatomic) char power;
@property (copy, nonatomic) NSData *awdlSyncEnabled;
@property (copy, nonatomic) NSData *awdlSyncState;
@property (copy, nonatomic) NSData *awdlSyncChannelSequence;
@property (copy, nonatomic) NSData *awdlStrategy;
@property (copy, nonatomic) NSData *awdlElectionParameters;
@property (copy, nonatomic) NSData *awdlMasterChannel;
@property (copy, nonatomic) NSData *awdlSecondaryMasterChannel;
@property (copy, nonatomic) NSData *awdlOpMode;
@property (copy, nonatomic) NSData *awdlSyncParameters;
@property (copy, nonatomic) NSData *awdlPeerDatabase;
@property (copy, nonatomic) NSData *awdlSidecarDiagnostics;
@property (nonatomic) char isAWDLRealTimeMode;
@property (nonatomic) long long airDropDiscoverableMode;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAWDLStatus:(id)a0;

@end
