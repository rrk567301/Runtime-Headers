@interface _LSDDeviceIdentifierService : _LSDService

+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (void)clearBaseSecret;
+ (id)baseSecret;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;
+ (id)XPCInterface;

- (id)initWithXPCListener:(id)a0;

@end
