@class NSString;

@interface WLKAppSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long accessStatus;
@property (readonly, nonatomic) NSString *externalID;
@property (nonatomic) char obsolete;

+ (char)isExternalID:(id)a0 equalToExternalID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONDictionary;
- (id)_statusStrings;
- (id)initWithChannelID:(id)a0 accessStatus:(unsigned long long)a1 displayName:(id)a2 externalID:(id)a3;
- (char)isEqualToAppSettings:(id)a0;

@end
