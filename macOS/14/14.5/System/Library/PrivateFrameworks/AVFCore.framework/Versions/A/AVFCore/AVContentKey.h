@class AVContentKeySpecifier;

@interface AVContentKey : NSObject {
    struct CMBaseObject { } *_keyBoss;
    struct FigContentKeySpecifier { } *_contentKeySpecifier;
    struct OpaqueFigCPECryptor { } *_cryptor;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) long long externalContentProtectionStatus;

+ (id)contentKeyWithSpecifier:(id)a0 cryptor:(struct OpaqueFigCPECryptor { } *)a1 contentKeyBoss:(struct CMBaseObject { } *)a2 contentKeySpecifier:(struct FigContentKeySpecifier { } *)a3;

- (void)dealloc;
- (struct OpaqueFigCPECryptor { } *)cryptor;
- (struct FigContentKeySpecifier { } *)_internalContentKeySpecifier;
- (id)initWithSpecifier:(id)a0 cryptor:(struct OpaqueFigCPECryptor { } *)a1 contentKeyBoss:(struct CMBaseObject { } *)a2 contentKeySpecifier:(struct FigContentKeySpecifier { } *)a3;
- (void)revoke;

@end
