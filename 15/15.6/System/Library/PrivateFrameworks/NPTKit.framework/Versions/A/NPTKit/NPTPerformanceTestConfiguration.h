@class NSString, NSDictionary, NSURL, NetworkQualityConfiguration;

@interface NPTPerformanceTestConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSURL *privateDownloadURL;
    NSURL *privateUploadURL;
    NSString *privatePingHost;
    NSString *privateClientName;
    char privateLegacyMode;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NetworkQualityConfiguration *NQConfiguration;
@property (readonly, nonatomic) NetworkQualityConfiguration *NQDownloadConfiguration;
@property (readonly, nonatomic) NetworkQualityConfiguration *NQUploadConfiguration;
@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic) char forceWiFi;
@property (nonatomic) char useSecureConnection;
@property (nonatomic) int downloadSize;
@property (nonatomic) int uploadSize;
@property (nonatomic) unsigned long long pingCount;
@property (nonatomic) int pingAddressStyle;
@property (nonatomic) char collectMetadata;
@property (nonatomic) long long concurrentStreams;
@property (retain, nonatomic) NSURL *downloadURL;
@property (retain, nonatomic) NSURL *uploadURL;
@property (retain, nonatomic) NSString *pingHost;
@property (nonatomic) int interfaceType;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long testDuration;
@property (nonatomic) char endWhenStable;
@property (nonatomic) char stopAtFileSize;
@property (nonatomic) char collectWRMMetrics;
@property (nonatomic) char legacyMode;
@property (nonatomic) char multiStream;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (retain, nonatomic) NSString *bonjourHost;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationCellular;
+ (id)defaultConfigurationWiFi;
+ (id)defaultConfigurationWiredEthernet;
+ (id)evaluateInterfaceName:(int)a0;
+ (id)fileSizeConfigurationWithTimeout:(int)a0 timeout:(unsigned long long)a1 downloadFileSize:(int)a2 uploadFileSize:(int)a3;
+ (id)interfaceServiceName:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cdnDownloadURL;
- (id)cdnUploadURL;
- (char)customURLSet;

@end
