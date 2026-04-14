@class NSURL, NSData;

@interface NEDNSOverHTTPSSettings : NEDNSSettings

@property (copy) NSURL *serverURL;
@property (copy) NSData *identityReference;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (long long)dnsProtocol;

@end
