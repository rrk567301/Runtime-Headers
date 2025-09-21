@class TSCH3DShaderVariable;

@interface TSCH3DShaderVariableLinkage : NSObject

@property (readonly, nonatomic) TSCH3DShaderVariable *variable;
@property (readonly, nonatomic) struct TSCH3DShaderType { unsigned long long x0; } shaderType;
@property (readonly, nonatomic) struct TSCH3DShaderType { unsigned long long _value; } linked;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2UL> { struct TSCH3DShaderVariableScopeType { unsigned long long _value; } __elems_[2]; } _scopes; } scope;
@property (readonly, nonatomic) char isLinked;
@property (readonly, nonatomic) char notLinked;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2UL> { struct TSCH3DShaderVariableScopeType { unsigned long long _value; } __elems_[2]; } _scopes; } declaredScope;
@property (nonatomic) char isUsed;
@property (readonly, nonatomic) char isSpecial;
@property (readonly, nonatomic) char isUniform;
@property (readonly, nonatomic) char hasAttribute;
@property (readonly, nonatomic) char isAttribute;
@property (readonly, nonatomic) char isVertexVarying;
@property (readonly, nonatomic) char isFragment;
@property (readonly, nonatomic) char hasFragment;
@property (readonly, nonatomic) char canHaveFragment;
@property (readonly, nonatomic) char isVertex;
@property (readonly, nonatomic) char hasVertex;
@property (readonly, nonatomic) char scopeHasFragment;
@property (readonly, nonatomic) char scopedInAll;
@property (readonly, nonatomic) char isFragmentLinkable;
@property (readonly, nonatomic) char isVertexLinkable;
@property (readonly, nonatomic) unsigned long long hasGlobal;

+ (id)linkageWithVariable:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithVariable:(id)a0;
- (void)unlink;
- (void)setLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)addBodyScope:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)addDeclaredShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (void)addLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)addShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (char)declaredInShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (id)globalNameForShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (char)hasBody:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (char)hasLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (char)hasShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (char)hasVarying;
- (char)isGlobalScope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a0;
- (char)isVarying:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)nameForShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (void)removeLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)removeShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (id)resolveGlobalNameForShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1 defaultTo:(id)a2;
- (void)setShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (char)updateLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (char)updateShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (id)variableDeclarationInShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1 isMetal:(char)a2;
- (id)variableQualifiersWithStorageQualifier:(id)a0 isMetal:(char)a1;

@end
