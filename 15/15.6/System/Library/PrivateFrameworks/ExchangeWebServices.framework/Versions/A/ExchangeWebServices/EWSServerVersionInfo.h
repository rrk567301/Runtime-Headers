@class NSString;

@interface EWSServerVersionInfo : NSObject <XSDefinitionProvider>

@property (nonatomic) long long MajorBuildNumber;
@property (nonatomic) long long MajorVersion;
@property (nonatomic) long long MinorBuildNumber;
@property (nonatomic) long long MinorVersion;
@property (copy, nonatomic) NSString *Version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;
- (char)supportsSchema:(id)a0;
- (id)_majorVersionString;
- (char)_meetsRequiredMajorVersion:(unsigned long long)a0 requiredMinorVersion:(unsigned long long)a1 requiredMajorBuildNumber:(unsigned long long)a2;
- (id)_minorVersionString;
- (char)isExchangeOnlineOrGreater;
- (void)messageTraceVersion;

@end
