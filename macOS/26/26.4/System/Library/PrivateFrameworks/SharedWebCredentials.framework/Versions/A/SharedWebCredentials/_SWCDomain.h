@class NSString, NSNumber;

@interface _SWCDomain : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) _SWCDomain *appleDomain;
@property (class, readonly) _SWCDomain *exampleDomain;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *rawValue;
@property (readonly) NSString *host;
@property (readonly) NSNumber *port;
@property (readonly, getter=isWildcard) BOOL wildcard;
@property (readonly) char modeOfOperation;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, getter=isHostIPAddress) BOOL hostIPAddress;
@property (readonly) NSString *topLevelDomainValue;
@property (readonly) _SWCDomain *nonWildcardDomain;
@property (readonly) _SWCDomain *wildcardDomain;

+ (id)new;

- (id)debugDescription;
- (id)initWithString:(id)a0;
- (id)initWithHost:(id)a0 port:(id)a1 wildcard:(BOOL)a2 modeOfOperation:(char)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)domainRequiringModeOfOperation:(char)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)encompassesDomain:(id)a0;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;

@end
