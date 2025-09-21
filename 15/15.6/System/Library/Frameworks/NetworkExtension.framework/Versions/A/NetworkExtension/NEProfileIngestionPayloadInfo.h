@class NSString, NSDate;

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *payloadProtocolType;
@property (copy) NSString *payloadUUID;
@property (copy) NSString *payloadOrganization;
@property (copy) NSString *profileOrganization;
@property (copy) NSString *profileIdentifier;
@property (copy) NSString *profileUUID;
@property (copy) NSDate *profileIngestionDate;
@property (copy) NSString *systemVersion;
@property char isSetAside;
@property long long profileSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;

@end
