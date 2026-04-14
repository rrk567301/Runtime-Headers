@interface CDPDAccount : NSObject

@property (nonatomic) BOOL hasDisabledKeychainExplicitly;

- (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

@end
