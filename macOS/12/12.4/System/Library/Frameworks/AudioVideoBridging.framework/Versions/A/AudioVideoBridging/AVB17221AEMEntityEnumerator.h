@class AVB17221Entity, AVBInterface, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVB17221AEMEntityEnumerator : NSObject <AVB17221AECPClient> {
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_queue> *enumerationQueue;
    NSObject<OS_dispatch_queue> *blockingQueue;
    AVB17221Entity *entity;
    AVBInterface *interface;
    unsigned long long controllerEntityID;
    unsigned long long completionCount;
    BOOL _enumerationFailed;
}

+ (id)enumerateEntity:(id)a0 onInterface:(id)a1 withControllerEntityID:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)enumerate;
- (BOOL)AECPDidReceiveResponse:(id)a0 onInterface:(id)a1;
- (BOOL)AECPDidReceiveCommand:(id)a0 onInterface:(id)a1;
- (id)initWithEntity:(id)a0 onInterface:(id)a1 withControllerEntityID:(unsigned long long)a2;
- (void)readDescriptorOfType:(unsigned short)a0 withID:(unsigned short)a1 inConfiguration:(unsigned short)a2 forObject:(id)a3 inflightLimiter:(id)a4 parent:(id)a5;
- (void)_readDescriptorOfType:(unsigned short)a0 withID:(unsigned short)a1 inConfiguration:(unsigned short)a2 forObject:(id)a3 inflightLimiter:(id)a4 parent:(id)a5;
- (void)processEntityDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processConfigurationDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processUnitDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processStreamPortDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processMatrixDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processLocaleDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processJackDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processPortDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processControlBlockDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processAVBInterfaceDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processPTPInstanceDescriptor:(id)a0 forObject:(id)a1 inflightLimiter:(id)a2;
- (void)processNodeDescriptor:(id)a0 forObject:(id)a1;

@end
