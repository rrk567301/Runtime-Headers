@interface _LSDDeviceIdentifierService : _LSDService

+ (void)clearBaseSecret;
+ (unsigned short)connectionType;
+ (id)XPCInterface;
+ (id)baseSecret;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;
+ (Class)clientClass;

- (id)initWithXPCListener:(id)a0;

@end
