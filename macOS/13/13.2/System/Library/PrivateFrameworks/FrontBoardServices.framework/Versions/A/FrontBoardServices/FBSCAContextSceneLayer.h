@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer

@property (readonly, nonatomic) CAContext *CAContext;
@property (readonly, nonatomic) unsigned int contextID;

+ (id)layerWithCAContext:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initWithCAContext:(id)a0 contextID:(unsigned int)a1 fallbackLevel:(double)a2;
- (id)initWithCAContext:(id)a0;
- (id)initWithCAContextID:(unsigned int)a0 level:(double)a1;
- (id)_succinctDescription;
- (BOOL)isCAContextLayer;

@end
