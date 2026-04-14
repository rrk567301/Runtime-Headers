@interface _LSDDeviceIdentifierService : _LSDService

+ (unsigned short)connectionType;
+ (id)baseSecret;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;
+ (void)clearBaseSecret;
+ (id)XPCInterface;
+ (Class)clientClass;

- (id)initWithXPCListener:(id)a0;

@end
