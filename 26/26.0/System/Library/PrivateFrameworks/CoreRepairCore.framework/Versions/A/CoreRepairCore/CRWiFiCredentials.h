@interface CRWiFiCredentials : NSObject

+ (id)createEncryptedCredentialsDataWithLocale:(id)a0;
+ (id)decryptWiFiCredDictFromCredentialsData:(id)a0;
+ (id)readAccessPointInfo;

@end
