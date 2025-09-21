@class NSString, _SWCApplicationIdentifier, _SWCDomain, NSNumber;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *applicationIdentifierPrefix;
@property (readonly, getter=isDomainWildcard) char domainWildcard;
@property (readonly) NSString *domainHost;
@property (readonly) NSNumber *domainPort;
@property (readonly) char domainModeOfOperation;
@property (readonly, getter=isValid) char valid;
@property (readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier;
@property (readonly) _SWCDomain *SWCDomain;
@property (readonly, getter=isFullySpecified) char fullySpecified;
@property (readonly) NSString *serviceType;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSString *domain;

+ (id)serviceSpecifiersWithEntitlementValue:(id)a0 serviceType:(id)a1 error:(id *)a2;
+ (id)_serviceSpecifiersWithEntitlementValue:(id)a0 serviceType:(id)a1 error:(id *)a2;
+ (id)serviceSpecifiersWithEntitlementValue:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)domain;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)applicationIdentifier;
- (id)initWithServiceType:(id)a0 applicationIdentifier:(id)a1 domain:(id)a2;
- (id)_initWithServiceType:(id)a0 applicationIdentifier:(id)a1 domain:(id)a2;
- (char)domainEncompassesDomain:(id)a0;
- (char)domainEncompassesDomainOfServiceSpecifier:(id)a0;

@end
