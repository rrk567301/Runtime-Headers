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
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (id)new;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;

- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)ensureFullyInitialized;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (id)indexVersionId;
- (id)newRequest;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (id)createRequest;
- (void).cxx_destruct;
- (id)retrieveCapabilites;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)didReceiveCKContextServiceUpdateNotification;
- (id)init;

@end
