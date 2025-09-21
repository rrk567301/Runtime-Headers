@class NSString, NSMutableDictionary;
@protocol MTLLibrary, VFXProgramDelegate;

@interface VFXProgram : NSObject <NSCopying, NSSecureCoding> {
    NSString *_vertexShader;
    NSString *_tessellationControlShader;
    NSString *_tessellationEvaluationShader;
    NSString *_geometryShader;
    NSString *_fragmentShader;
    NSString *_vertexFunctionName;
    NSString *_fragmentFunctionName;
    NSString *_name;
    NSString *_sourceFile;
    NSMutableDictionary *_semanticInfos;
    char _opaque;
    id _library;
    id _delegate;
    NSMutableDictionary *_bufferBindings;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *vertexShader;
@property (copy, nonatomic) NSString *fragmentShader;
@property (copy, nonatomic) NSString *tessellationControlShader;
@property (copy, nonatomic) NSString *tessellationEvaluationShader;
@property (copy, nonatomic) NSString *geometryShader;
@property (copy, nonatomic) NSString *vertexFunctionName;
@property (copy, nonatomic) NSString *fragmentFunctionName;
@property (nonatomic, getter=isOpaque) char opaque;
@property (nonatomic) id<VFXProgramDelegate> delegate;
@property (retain, nonatomic) id<MTLLibrary> library;

+ (id)program;
+ (id)programWithLibrary:(id)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (id)semanticForSymbol:(id)a0;
- (void)setSemantic:(id)a0 forSymbol:(id)a1;
- (void)setSemantic:(id)a0 forSymbol:(id)a1 options:(id)a2;
- (id)_bufferBindings;
- (id)_optionsForSymbol:(id)a0;
- (void)handleBindingOfBufferNamed:(id)a0 frequency:(long long)a1 usingBlock:(id /* block */)a2;
- (void)setSemanticInfos:(id)a0;
- (void)setSourceFile:(id)a0;
- (id)sourceFile;
- (id)_allSymbolsWithVFXSemantic;
- (void)_customDecodingOfVFXProgram:(id)a0;
- (void)_customEncodingOfVFXProgram:(id)a0;

@end
