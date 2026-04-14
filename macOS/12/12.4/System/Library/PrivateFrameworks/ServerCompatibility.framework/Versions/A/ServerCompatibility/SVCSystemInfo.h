@class NSString;

@interface SVCSystemInfo : SVCObject

@property (copy) NSString *computerModelIdentifier;
@property (copy) NSString *computerModelName;
@property (copy) NSString *operatingSystemName;
@property (copy) NSString *operatingSystemVersion;
@property (copy) NSString *operatingSystemBuild;
@property (copy) NSString *serialNumber;
@property (copy) NSString *cpuKind;
@property long long numberOfCPUs;
@property long long cpuSpeedInHz;
@property long long memorySize;
@property (readonly) NSString *cpuDescription;
@property (readonly) BOOL isMobileHardware;

+ (id)currentSystemInfo;

- (void).cxx_destruct;

@end
