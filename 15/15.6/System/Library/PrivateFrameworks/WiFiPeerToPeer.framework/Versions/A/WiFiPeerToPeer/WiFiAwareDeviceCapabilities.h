@class NSNumber, NSArray, NSString;

@interface WiFiAwareDeviceCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *operatingChannel;
@property (readonly, nonatomic) NSNumber *operatingClass;
@property (readonly, nonatomic) NSArray *supportedCipherSuites;
@property (readonly, nonatomic) unsigned char supportedBands;
@property (readonly, nonatomic) BOOL supportsDataTransfer;
@property (readonly, nonatomic) NSString *discoveryInterfaceName;

+ (void)addAutoPairingBootstrapBlobForPeer:(id)a0;
+ (id)currentDeviceCapabilities;
+ (char)fetchAutoPairingBootstrapBlob:(id *)a0 error:(id *)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperatingChannel:(id)a0 operatingClass:(id)a1 supportedCipherSuites:(id)a2 supportsDataTransfer:(char)a3 supportedBands:(unsigned char)a4 discoveryInterfaceName:(id)a5;

@end
