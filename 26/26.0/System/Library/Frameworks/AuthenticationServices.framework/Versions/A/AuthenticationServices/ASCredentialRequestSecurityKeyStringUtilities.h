@class NSString;

@interface ASCredentialRequestSecurityKeyStringUtilities : NSObject

@property (class, readonly, nonatomic) NSString *activateSecurityKeyAgainMessageText;

+ (id)messageWithPresentationContext:(id)a0;
+ (id)_basicAssertionMessageTextWithServiceName:(id)a0 serviceType:(unsigned long long)a1;
+ (id)_multipleAllowedSecurityKeysMessageTextWithServiceName:(id)a0 serviceType:(unsigned long long)a1;
+ (id)_registerSecurityKeyMessageTextWithServiceName:(id)a0 serviceType:(unsigned long long)a1;
+ (id)messageWithMode:(long long)a0 serviceName:(id)a1 serviceType:(unsigned long long)a2;
+ (long long)modeForPresentationContext:(id)a0;
+ (id)titleWithMode:(long long)a0;
+ (id)titleWithPresentationContext:(id)a0;

@end
