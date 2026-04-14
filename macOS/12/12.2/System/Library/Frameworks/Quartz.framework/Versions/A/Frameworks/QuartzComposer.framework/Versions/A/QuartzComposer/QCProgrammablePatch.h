@class NSMutableArray, NSMutableDictionary, GFList;

@interface QCProgrammablePatch : QCPatch {
    NSMutableDictionary *_sources;
    NSMutableDictionary *_compileStatus;
    GFList *_parameterTypes;
    NSMutableArray *_parameterPorts;
    GFList *_resultTypes;
    NSMutableArray *_resultPorts;
    void *_unused4[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sourceTypes;
+ (int)indicesType;
+ (Class)portClassFromParameterInfo:(id)a0;
+ (BOOL)isKeyValid:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)parameterList;
- (id)sourceOfType:(id)a0;
- (id)compileStatusForSourceOfType:(id)a0;
- (void)setSource:(id)a0 ofType:(id)a1;
- (BOOL)isSourceType:(id)a0;
- (id)resultList;
- (BOOL)setParameterList:(id)a0;
- (BOOL)setResultList:(id)a0;
- (id)compileSourceOfType:(id)a0;
- (void)recompileSourceOfType:(id)a0;
- (id)attributesForParameterPortWithInfo:(id)a0 name:(id)a1 index:(unsigned long long)a2;
- (id)attributesForResultPortWithInfo:(id)a0 name:(id)a1 index:(unsigned long long)a2;
- (BOOL)_updateTypes:(id)a0 ports:(id)a1 list:(id)a2 direction:(int)a3;
- (id)parameterPorts;
- (id)resultPorts;

@end
