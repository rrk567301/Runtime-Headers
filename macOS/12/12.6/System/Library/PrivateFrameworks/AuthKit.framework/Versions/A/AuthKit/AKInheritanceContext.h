@class AKBeneficiaryManifest, NSString, NSDictionary, AKDevice, AKInheritanceAccessKey;

@interface AKInheritanceContext : NSObject <AKAuthenticationContext, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *beneficiaryIdentifier;
@property (copy, nonatomic) NSString *beneficiarySetupToken;
@property (retain, nonatomic) AKBeneficiaryManifest *manifest;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) long long authenticationMode;
@property (nonatomic) BOOL cliMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
