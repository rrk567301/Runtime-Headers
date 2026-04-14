@interface MACAddress : NSObject

+ (void)removeMACAddressSeparatorsFromString:(id)a0;
+ (BOOL)parseMACAddress:(const char *)a0 intoHexString:(char *)a1;
+ (id)macAddressDataFromString:(id)a0;
+ (id)stringFromMACAddressData:(id)a0;
+ (BOOL)validMACAddressString:(id)a0;

@end
