@class NSObject;
@protocol OS_dispatch_queue;

@interface CSNDEObjectFactory : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void **)createNDEObject:(id)a0;
- (void)destoryNDEObject:(void **)a0;

@end
