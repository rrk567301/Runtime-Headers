@interface AVB17221AECPAEMAuthenticationAddKeyNonceResponse : AVB17221AECPAEMMessage

@property (nonatomic) unsigned long long controllerNonce;
@property (nonatomic) unsigned long long targetNonce;
@property (nonatomic) unsigned long long keyID;

+ (id)keyPathsForValuesAffectingKeyID;
+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingControllerNonce;
+ (id)keyPathsForValuesAffectingTargetNonce;

- (unsigned long long)keyID;
- (id)init;
- (void)setKeyID:(unsigned long long)a0;
- (unsigned long long)controllerNonce;
- (void)setTargetNonce:(unsigned long long)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setControllerNonce:(unsigned long long)a0;
- (unsigned long long)targetNonce;

@end
