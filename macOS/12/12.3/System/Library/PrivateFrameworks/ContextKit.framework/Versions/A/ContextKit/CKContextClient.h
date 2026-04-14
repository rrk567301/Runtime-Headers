@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (void)initialize;
+ (id)new;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (BOOL)isLikelyUnsolicitedUserInteraction;

- (id)init;
- (void).cxx_destruct;
- (id)createRequest;
- (id)newRequest;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (void)didReceiveCKContextServiceUpdateNotification;
- (void)ensureFullyInitialized;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (id)retrieveCapabilites;
- (id)indexVersionId;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void)workWithServiceSemaphore:(id /* block */)a0;

@end
