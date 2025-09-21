@class PHASEEngine, NSMutableDictionary, PHASEMedium, NSArray, NSObject, NSMutableArray;

@interface PHASEContext : NSObject <NSCopying>

@property (readonly, weak, nonatomic) PHASEEngine *engine;
@property (retain, nonatomic) NSMutableDictionary *streams;
@property (retain, nonatomic) NSObject *streamsLock;
@property (retain, nonatomic) NSMutableArray *internalEnvironments;
@property (retain, nonatomic) NSObject *internalEnvironmentsLock;
@property (retain, nonatomic) PHASEMedium *internalMedium;
@property (retain, nonatomic) NSObject *internalMediumLock;
@property (nonatomic) struct Handle64 { unsigned long long mData; } geoContextHandle;
@property (copy, nonatomic) NSArray *environments;
@property (retain, nonatomic) PHASEMedium *medium;

+ (id)new;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (id)initWithEngine:(id)a0;
- (void).cxx_destruct;
- (void)addEnvironment:(id)a0;
- (void)removeEnvironment:(id)a0;
- (void)setStream:(id)a0 forKey:(id)a1;
- (id)streamForKey:(id)a0;

@end
