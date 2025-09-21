@interface CFXShaderModifierEncoder : NSObject <NSSecureCoding> {
    struct __CFXShaderModifier { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; struct __CFString *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct __CFDictionary *x7; char x8; unsigned char x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned char x13[32]; } *_shaderModifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)shaderModifierEncoderWithShaderModifier:(struct __CFXShaderModifier { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; struct __CFString *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct __CFDictionary *x7; char x8; unsigned char x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned char x13[32]; } *)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShaderModifier:(struct __CFXShaderModifier { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; struct __CFString *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct __CFDictionary *x7; char x8; unsigned char x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned char x13[32]; } *)a0;
- (struct __CFXShaderModifier { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; struct __CFString *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct __CFDictionary *x7; char x8; unsigned char x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned char x13[32]; } *)shaderModifier;

@end
