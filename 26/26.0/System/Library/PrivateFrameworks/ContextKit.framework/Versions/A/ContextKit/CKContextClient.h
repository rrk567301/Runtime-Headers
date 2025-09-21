@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (id)new;
+ (void)initialize;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (BOOL)isLikelyUnsolicitedUserInteraction;

- (id)newRequest;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (id)retrieveCapabilites;
- (void)ensureFullyInitialized;
- (id)init;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)didReceiveCKContextServiceUpdateNotification;
- (id)createRequest;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (id)indexVersionId;
- (void).cxx_destruct;
- (void)capabilitiesWithReply:(id /* block */)a0;

@end
