@class AVB17221AEMAuthenticationKey;

@interface AVB17221AECPAEMAuthenticationKeyMessage : AVB17221AECPAEMAuthenticationKeyIDMessage

@property (copy, nonatomic) AVB17221AEMAuthenticationKey *key;

+ (id)keyPathsForValuesAffectingKey;

- (void)setKey:(id)a0;
- (id)key;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
