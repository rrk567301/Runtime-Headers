@class AVContentKeySpecifier;

@interface AVContentKey : NSObject {
    struct OpaqueFigContentKeyBoss { } *_keyBoss;
    struct OpaqueFigContentKeySpecifier { } *_contentKeySpecifier;
    struct OpaqueFigCPECryptor { } *_cryptor;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) long long externalContentProtectionStatus;

+ (id)contentKeyWithSpecifier:(id)a0 cryptor:(struct OpaqueFigCPECryptor { } *)a1 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a2 contentKeySpecifier:(struct OpaqueFigContentKeySpecifier { } *)a3;

- (struct OpaqueFigCPECryptor { } *)cryptor;
- (void)dealloc;
- (struct OpaqueFigCPECryptor { } *)_cryptorForFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (struct OpaqueFigContentKeySpecifier { } *)_internalContentKeySpecifier;
- (id)cryptorForFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (id)initWithSpecifier:(id)a0 cryptor:(struct OpaqueFigCPECryptor { } *)a1 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a2 contentKeySpecifier:(struct OpaqueFigContentKeySpecifier { } *)a3;
- (void)revoke;

@end
