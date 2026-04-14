@class NSArray;

@interface CFXShaderModifierArrayEncoder : NSObject <NSSecureCoding> {
    NSArray *_shaderModifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)shaderModifierArrayEncoderWithArray:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)shaderModifiers;

@end
