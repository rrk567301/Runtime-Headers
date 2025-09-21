@class NSURL, NSData;

@interface NEDNSOverHTTPSSettings : NEDNSSettings

@property (copy) NSURL *serverURL;
@property (copy) NSData *identityReference;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (long long)dnsProtocol;
- (id)initFromLegacyDictionary:(id)a0;

@end
