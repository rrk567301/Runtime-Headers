@class CWChannel, NSString, NSData, NSDate;

@interface CWRoamStatistics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long active2GHzProfile;
@property long long active5GHzProfile;
@property long long active6GHzProfile;
@property (copy) NSDate *startedAt;
@property (copy) NSDate *endedAt;
@property (copy) NSString *fromBSSID;
@property (copy) NSString *toBSSID;
@property (copy) CWChannel *fromChannel;
@property (copy) CWChannel *toChannel;
@property long long fromRSSI;
@property long long toRSSI;
@property (copy) NSData *ssid;
@property long long reason;
@property long long status;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRoamStatistics:(id)a0;

@end
