@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPSharedInstanceManager : NSObject {
    NSObject<OS_dispatch_queue> *serialQueue_;
    NSMutableDictionary *sharedInstances_;
}

+ (id)sharedManager;

- (void)reset;
- (id)sharedInstanceWithIdentifier:(id)a0 andCreationBlock:(id /* block */)a1;
- (id)init;
- (void)resetSharedInstanceWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
