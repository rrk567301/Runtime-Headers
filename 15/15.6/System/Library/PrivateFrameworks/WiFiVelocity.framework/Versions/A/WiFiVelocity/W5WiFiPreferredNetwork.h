@class NSString, NSData, NSDate;

@interface W5WiFiPreferredNetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *ssidString;
@property (copy, nonatomic) NSData *ssid;
@property (nonatomic) long long security;
@property (nonatomic) char isEnabled;
@property (nonatomic) char isPasspoint;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) char isCaptive;
@property (nonatomic) char isHidden;
@property (nonatomic) char isMultiAP;
@property (copy, nonatomic) NSDate *lastJoinedTimestamp;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToPreferredNetwork:(id)a0;

@end
