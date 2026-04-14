@interface _LSDDeviceIdentifierService : _LSDService

+ (id)XPCInterface;
+ (void)clearBaseSecret;
+ (id)baseSecret;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;
+ (unsigned short)connectionType;
+ (Class)clientClass;

- (id)initWithXPCListener:(id)a0;

@end
