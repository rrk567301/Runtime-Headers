@interface SASSystemInformation : NSObject

+ (id)productVersion;
+ (id)productType;
+ (id)deviceClass;
+ (long long)compareProductVersion:(id)a0 toProductVersion:(id)a1;

@end
