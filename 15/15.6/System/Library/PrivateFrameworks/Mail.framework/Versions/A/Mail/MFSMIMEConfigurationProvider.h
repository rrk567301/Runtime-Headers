@interface MFSMIMEConfigurationProvider : NSObject <EDSMIMEConfigurationProvider>

@property (readonly, nonatomic) char signingIsConfigured;
@property (readonly, nonatomic) char signingEnabledByDefault;
@property (readonly, nonatomic) char encryptionIsConfigured;
@property (readonly, nonatomic) char encryptionIsEnabledByDefault;

@end
