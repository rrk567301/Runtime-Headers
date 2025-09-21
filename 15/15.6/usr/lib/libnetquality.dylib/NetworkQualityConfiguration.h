@class NSString, NSDictionary, NSObject;

@interface NetworkQualityConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString *customConfigurationString;
    NSDictionary *customConfigurationDictionary;
}

@property (class, readonly) char supportsSecureCoding;

@property char forceHTTP1;
@property char forceHTTP2;
@property char forceHTTP3;
@property char forceL4S;
@property char forceDisableL4S;
@property char edgeRelay;
@property char edgeRelayRemote;
@property (retain, nonatomic) NSString *hostOverride;
@property long long movingAveragePeriod;
@property long long standardDeviationThreshold;
@property long long trimmedMeanThreshold;
@property long long multipathServiceType;
@property unsigned long long latencyMeasurementServiceType;
@property unsigned long long loadGeneratingNetworkServiceType;
@property char useUnifiedHTTPStack;
@property (copy, nonatomic) NSObject *configuration;
@property (copy, nonatomic) NSString *bonjourHost;
@property (copy, nonatomic) NSString *networkInterfaceName;
@property char idleLatency;
@property char upload;
@property char download;
@property char parallel;
@property char workingLatency;
@property char validateCertificate;
@property long long minUploadFlows;
@property long long maxUploadFlows;
@property long long minDownloadFlows;
@property long long maxDownloadFlows;
@property char telemetry;
@property long long minRuntime;
@property long long maxRuntime;
@property long long maxDownlinkData;
@property long long maxUplinkData;
@property char privateRelay;
@property long long maxDownlinkThroughput;
@property long long maxUplinkThroughput;
@property long long latencyCriteria;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasCustomConfigurationSet;

@end
