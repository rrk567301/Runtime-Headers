@interface _LSDDeviceIdentifierService : _LSDService

+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;
+ (id)baseSecret;
+ (void)clearBaseSecret;

- (id)initWithXPCListener:(id)a0;

@end
