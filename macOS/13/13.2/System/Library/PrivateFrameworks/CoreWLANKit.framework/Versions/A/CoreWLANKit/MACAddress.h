@interface MACAddress : NSObject

+ (BOOL)parseMACAddress:(const char *)a0 intoHexString:(char *)a1;
+ (id)macAddressDataFromString:(id)a0;
+ (id)stringFromMACAddressData:(id)a0;
+ (BOOL)validMACAddressString:(id)a0;
+ (void)removeMACAddressSeparatorsFromString:(id)a0;

@end
