@interface EMSMIMEUtilities : NSObject

+ (unsigned long long)_encryptionLevelForSender:(id)a0;
+ (char)_isICloudAddress:(id)a0;
+ (unsigned long long)_messageSecurityLevelViaOtherDevices;
+ (unsigned long long)encryptionLevelForSender:(id)a0 forAdvertisement:(char)a1 useGCM:(char *)a2 encryptSubject:(char *)a3;

@end
