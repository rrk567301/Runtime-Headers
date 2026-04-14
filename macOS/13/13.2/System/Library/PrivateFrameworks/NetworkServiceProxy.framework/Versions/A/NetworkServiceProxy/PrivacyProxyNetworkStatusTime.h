@class NSDate, PrivacyProxyNetworkStatus;

@interface PrivacyProxyNetworkStatusTime : NSObject <NSSecureCoding, NSCopying> {
    PrivacyProxyNetworkStatus *_networkStatus;
    NSDate *_networkStatusStartTime;
    NSDate *_networkStatusEndTime;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
