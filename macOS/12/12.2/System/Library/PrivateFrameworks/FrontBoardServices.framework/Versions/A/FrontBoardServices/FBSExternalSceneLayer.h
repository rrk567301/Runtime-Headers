@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer

@property (readonly, copy, nonatomic) NSString *sceneID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (long long)alignment;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)_succinctDescription;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1 sceneID:(id)a2;
- (id)initWithExternalSceneID:(id)a0 level:(double)a1;
- (id)initWithExternalSceneID:(id)a0 trackingContext:(id)a1;
- (BOOL)isExternalSceneLayer;

@end
