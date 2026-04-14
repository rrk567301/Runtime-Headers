@class NSString;

@interface CtrAccessorySpecificThreadInfoInput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *accessoryManufacturer;
@property (readonly) NSString *accessoryModel;
@property (readonly) NSString *hostName;
@property (readonly) NSString *serviceInstanceName;
@property (readonly) NSString *ipv6Address;
@property (readonly) long long browseStatus;
@property (readonly) long long resolveStatus;
@property (readonly) long long transactionStatus;
@property (readonly) BOOL isWrite;
@property (readonly) BOOL isLinkFallBack;
@property (readonly) long long communicationProtocol;
@property (readonly) long long hapThreadAccessoryCapabilities;
@property (readonly) unsigned long long errorCode;
@property (readonly) unsigned long long hapCoAPTokenInfo;
@property (readonly) unsigned long long matterSessionInfo;
@property (readonly) unsigned long long consecutiveFailureCount;
@property (readonly) unsigned long long consecutiveSuccessCount;
@property (readonly) unsigned long long durationSecondsSinceLastSuccessfulRequest;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initData:(id)a0 accessoryModel:(id)a1 hostName:(id)a2 serviceInstanceName:(id)a3 ipv6Address:(id)a4 browseStatus:(long long)a5 resolveStatus:(long long)a6 transactionStatus:(long long)a7 isWrite:(BOOL)a8 isLinkFallback:(BOOL)a9 communicationProtocol:(long long)a10 hapThreadAccessoryCapabilities:(long long)a11 errorCode:(unsigned long long)a12 hapTokenInfo:(unsigned long long)a13 matterSessionInfo:(unsigned long long)a14 consecutiveFailureCount:(unsigned long long)a15 consecutiveSuccessCount:(unsigned long long)a16 durationSecondsSinceLastSuccessfulRequest:(unsigned long long)a17;

@end
