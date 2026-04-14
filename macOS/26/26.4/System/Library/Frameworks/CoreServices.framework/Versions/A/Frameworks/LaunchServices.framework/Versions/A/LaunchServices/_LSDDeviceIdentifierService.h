@interface _LSDDeviceIdentifierService : _LSDService

+ (unsigned short)connectionType;
+ (struct __CFDictionary { } *)getBaseSecretCommonQueryDictionary;
+ (id)baseSecret;
+ (void)clearBaseSecret;
+ (Class)clientClass;
+ (id)XPCInterface;

- (id)initWithXPCListener:(id)a0;

@end
