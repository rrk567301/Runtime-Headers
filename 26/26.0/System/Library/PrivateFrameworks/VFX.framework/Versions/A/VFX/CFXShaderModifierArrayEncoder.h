@class NSArray;

@interface CFXShaderModifierArrayEncoder : NSObject <NSSecureCoding> {
    NSArray *_shaderModifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)shaderModifierArrayEncoderWithArray:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)shaderModifiers;

@end
