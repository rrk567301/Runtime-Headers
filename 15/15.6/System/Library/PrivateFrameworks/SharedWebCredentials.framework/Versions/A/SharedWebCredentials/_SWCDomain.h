@class NSString, NSNumber;

@interface _SWCDomain : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) _SWCDomain *appleDomain;
@property (class, readonly) _SWCDomain *exampleDomain;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *rawValue;
@property (readonly) NSString *host;
@property (readonly) NSNumber *port;
@property (readonly, getter=isWildcard) char wildcard;
@property (readonly) char modeOfOperation;
@property (readonly, getter=isValid) char valid;
@property (readonly, getter=isHostIPAddress) char hostIPAddress;
@property (readonly) NSString *topLevelDomainValue;
@property (readonly) _SWCDomain *nonWildcardDomain;
@property (readonly) _SWCDomain *wildcardDomain;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)domainRequiringModeOfOperation:(char)a0;
- (char)encompassesDomain:(id)a0;
- (id)initWithHost:(id)a0 port:(id)a1 wildcard:(char)a2 modeOfOperation:(char)a3;

@end
