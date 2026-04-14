@interface SASSystemInformation : NSObject

+ (id)deviceClass;
+ (id)productType;
+ (id)productVersion;
+ (long long)compareProductVersion:(id)a0 toProductVersion:(id)a1;

@end
