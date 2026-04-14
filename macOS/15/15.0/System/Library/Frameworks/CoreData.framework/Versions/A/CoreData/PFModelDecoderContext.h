@class NSManagedObjectModel, NSEntityDescription, NSMutableSet;

@interface PFModelDecoderContext : NSObject {
    NSManagedObjectModel *model;
    NSEntityDescription *entity;
    NSMutableSet *objectPool;
}

+ (id)retainedContext;
+ (void)assertNoContext;

- (void)dealloc;

@end
