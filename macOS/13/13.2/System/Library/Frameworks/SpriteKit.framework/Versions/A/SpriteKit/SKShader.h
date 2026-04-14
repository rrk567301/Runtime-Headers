@class NSArray, NSString, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface SKShader : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_uniforms;
    NSArray *_attributes;
    NSMutableDictionary *_uniformData;
    NSString *_source;
    NSString *_fileName;
    BOOL _isPrecompiledMetal;
    NSString *_compileLog;
    BOOL _programDirty;
    BOOL _programWithTransformDirty;
    NSPointerArray *_targetNodes;
    BOOL _usesTimeUniform;
    BOOL _usesPathLengthUniform;
    BOOL _usesSpriteSizeUniform;
    struct shared_ptr<jet_program> { struct jet_program *__ptr_; struct __shared_weak_count *__cntrl_; } _backingProgram;
    struct shared_ptr<jet_program> { struct jet_program *__ptr_; struct __shared_weak_count *__cntrl_; } _backingProgramWithTransform;
    struct map<std::string, std::shared_ptr<jet_buffer_pool>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<jet_buffer_pool>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _attributeBuffers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *_textureUniforms;
@property (readonly) void *_attributeBuffers;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; } _backingProgram;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; } _backingProgramWithTransform;
@property (readonly) struct shared_ptr<jet_command_buffer> { struct jet_command_buffer *x0; struct __shared_weak_count *x1; } _commands;
@property BOOL performFullCapture;
@property (copy) NSString *source;
@property (copy) NSArray *uniforms;
@property (copy, nonatomic) NSArray *attributes;

+ (id)shader;
+ (id)shaderWithSource:(id)a0;
+ (id)shaderWithSource:(id)a0 uniforms:(id)a1;
+ (id)shaderWithFileNamed:(id)a0;
+ (id)precompiledMetalShaderWithFile:(id)a0 uniforms:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSource:(id)a0;
- (id)initWithSource:(id)a0 uniforms:(id)a1;
- (id)fragmentPrelude;
- (id)fragmentPreludeMetal;
- (void)generateVertexAttributeDeclares:(id *)a0 statements:(id *)a1;
- (void)generateFragmentAttributeDeclares:(id *)a0;
- (id)fullVertexSource;
- (id)fullVertexWithTransformSource;
- (id)_fullVertexSourceWithImplementation:(long long)a0;
- (id)fullFragmentSource;
- (id)fullMetalVertexSource;
- (id)fullMetalVertexWithTransformSource;
- (id)_fullMetalVertexSourceWithImplementation:(BOOL)a0;
- (id)fullMetalFragmentSource;
- (void)addUniform:(id)a0;
- (id)uniformNamed:(id)a0;
- (void)removeUniformNamed:(id)a0;
- (BOOL)_backingProgramIsDirty;
- (struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; })_makeBackingProgramWithImplementation:(long long)a0;
- (struct shared_ptr<jet_command_buffer> { struct jet_command_buffer *x0; struct __shared_weak_count *x1; })_commandsForBatchOffset:(int)a0 count:(int)a1;
- (id)_generateMetalSource;
- (id)_getMetalVertexOutDefinition;
- (id)_getMetalFragmentFunctionName;
- (id)_getShaderCompilationLog;
- (id)_getMetalVertexShaderSource:(BOOL)a0;
- (id)_getMetalFragmentShaderSource;
- (BOOL)_usesTimeUniform;
- (BOOL)_usesPathLengthUniform;
- (void)_setUniformsDirty;
- (void)_addTargetNode:(id)a0;
- (void)_removeTargetNode:(id)a0;
- (BOOL)isEqualToShader:(id)a0;
- (id)_getLegacyUniformData;

@end
