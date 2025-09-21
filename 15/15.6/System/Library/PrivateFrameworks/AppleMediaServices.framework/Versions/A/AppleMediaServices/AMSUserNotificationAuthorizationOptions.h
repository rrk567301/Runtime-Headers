@class NSDictionary;

@interface AMSUserNotificationAuthorizationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long authorizationOptions;
@property (retain) NSDictionary *metricsOverlay;
@property char userInitiated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)a0;

@end
