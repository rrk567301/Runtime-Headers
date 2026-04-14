@interface _LSDDeviceIdentifierService : _LSDService

+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;
+ (id)baseSecret;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;
+ (void)clearBaseSecret;

- (id)initWithXPCListener:(id)a0;

@end
