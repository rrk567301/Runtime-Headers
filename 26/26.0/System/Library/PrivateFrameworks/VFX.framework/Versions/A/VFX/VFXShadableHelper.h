@class NSArray, NSDictionary, NSMutableDictionary, VFXProgram, NSNumber;

@interface VFXShadableHelper : NSObject <NSSecureCoding> {
    id _owner;
    VFXProgram *_program;
    NSDictionary *_shaderModifiers;
    NSArray *_cfxShaderModifierCache;
    NSNumber *_minimumLanguageVersion;
    NSMutableDictionary *_arguments;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (retain, nonatomic) NSNumber *minimumLanguageVersion;
@property (retain, nonatomic) VFXProgram *program;
@property (readonly, nonatomic) id owner;
@property (readonly, nonatomic) NSDictionary *shaderModifiersArguments;

- (BOOL)isOpaque;
- (id)initWithOwner:(id)a0;
- (void)dealloc;
- (void)_commonInit;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)__CFObject;
- (void)_programDidChange:(id)a0;
- (void)_parseAndSetShaderModifier:(id)a0;
- (void)_startObservingProgram;
- (void)_stopObservingProgram;
- (void)copyModifiersFrom:(id)a0;
- (void)ownerWillDie;
- (void)_customEncodingOfVFXShadableHelper:(id)a0;
- (void)_programDidCompile:(id)a0;
- (void)_setCFXProgram;

@end
