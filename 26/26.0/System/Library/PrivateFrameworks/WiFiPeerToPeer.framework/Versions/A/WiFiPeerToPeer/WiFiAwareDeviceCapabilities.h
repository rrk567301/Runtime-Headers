@class NSSet, NSArray, NSString, NSNumber;

@interface WiFiAwareDeviceCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *supportedFeatures;
@property (readonly, nonatomic) NSNumber *operatingChannel;
@property (readonly, nonatomic) NSNumber *operatingClass;
@property (readonly, nonatomic) NSArray *supportedCipherSuites;
@property (readonly, nonatomic) unsigned char supportedBands;
@property (readonly, nonatomic) BOOL supportsDataTransfer;
@property (readonly, nonatomic) NSString *discoveryInterfaceName;
@property (readonly, nonatomic) long long maxPeers;
@property (readonly, nonatomic) long long maxPublishers;
@property (readonly, nonatomic) long long maxSubscribers;
@property (readonly, nonatomic) long long maxDatapaths;

+ (void)rotateAutoPairingBootstrapBlobs;
+ (void)addorUpdateAutoPairingBootstrapBlob:(id)a0;
+ (void)addorUpdateAutoPairingBootstrapBlob:(id)a0 uuid:(id)a1;
+ (void)addorUpdateAutoPairingBootstrapBlobForPeer:(id)a0;
+ (id)currentDeviceCapabilities;
+ (void)deleteAutoPairingBootstrapBlobForClientUUID:(id)a0;
+ (BOOL)fetchAutoPairingBootstrapBlob:(id *)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSupportedFeatures:(id)a0 operatingChannel:(id)a1 operatingClass:(id)a2 supportedCipherSuites:(id)a3 supportsDataTransfer:(BOOL)a4 supportedBands:(unsigned char)a5 discoveryInterfaceName:(id)a6 maxPeers:(long long)a7 maxPublishers:(long long)a8 maxSubscribers:(long long)a9 maxDatapaths:(long long)a10;

@end
