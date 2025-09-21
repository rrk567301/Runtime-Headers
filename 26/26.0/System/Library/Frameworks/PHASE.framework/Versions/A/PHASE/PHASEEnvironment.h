@class NSMutableDictionary, PHASEMedium, NSArray, NSObject;

@interface PHASEEnvironment : PHASEObject

@property (retain, nonatomic) NSMutableDictionary *streamOverrides;
@property (retain, nonatomic) NSObject *streamOverridesLock;
@property (nonatomic) BOOL mediumOverrideActive;
@property (retain, nonatomic) PHASEMedium *mediumOverride;
@property (retain, nonatomic) NSObject *mediumOverrideLock;
@property (readonly, copy, nonatomic) NSArray *shapes;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)overrideMedium:(id)a0;
- (id)initWithEngine:(id)a0 shapes:(id)a1;
- (BOOL)isOverridingMedium;
- (BOOL)isOverridingStreamForKey:(id)a0;
- (void)overrideStream:(id)a0 forKey:(id)a1;
- (void)removeMediumOverride;
- (void)removeOverrideForKey:(id)a0;
- (id)streamForKey:(id)a0;

@end
