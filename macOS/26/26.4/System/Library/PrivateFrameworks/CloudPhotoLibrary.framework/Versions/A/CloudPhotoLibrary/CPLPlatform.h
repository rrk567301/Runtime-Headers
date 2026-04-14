@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CPLPlatform : NSObject {
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
}

@property (copy, nonatomic) NSString *suffix;

+ (id)currentPlatform;
+ (id)defaultPlatform;
+ (void)setDefaultPlatform:(id)a0;
+ (void)setProxyImplementationForPlatform:(id)a0;

- (Class)implementationClassForAbstractClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setPlatformImplementation:(Class)a0 forClass:(Class)a1;
- (id)description;
- (id)newPlatformImplementationForObject:(id)a0;

@end
