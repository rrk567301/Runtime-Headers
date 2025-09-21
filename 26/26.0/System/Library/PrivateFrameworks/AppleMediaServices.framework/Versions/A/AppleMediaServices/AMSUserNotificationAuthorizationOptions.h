@class NSDictionary;

@interface AMSUserNotificationAuthorizationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long authorizationOptions;
@property (retain) NSDictionary *metricsOverlay;
@property BOOL userInitiated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)optionsDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOptionsDictionary:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
