@interface SUBootPolicyUtil : NSObject

@property (class) SUBootPolicyUtil *sharedInstance;

- (id)bootPolicyCount;
- (unsigned char)_byteForNVRAMKey:(id)a0 namespace:(id)a1;
- (id)bootPolicyDigestTagExists:(unsigned int)a0;
- (id)bootPolicyIntegerTagExists:(unsigned int)a0;
- (id)bootPolicySecurityMode;
- (id)bootPolicyValueForBooleanTag:(unsigned int)a0;
- (unsigned char)secureBootPolicy;
- (char)startupManagerAllowsAppleExternalDrive;
- (char)startupManagerAllowsAppleNetwork;
- (char)startupManagerAllowsWindows;
- (unsigned char)startupManagerPolicy;
- (char)supportsBootPolicy;

@end
