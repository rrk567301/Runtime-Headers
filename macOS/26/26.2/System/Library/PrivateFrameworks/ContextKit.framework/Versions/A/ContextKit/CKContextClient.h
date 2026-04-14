@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (id)new;
+ (void)initialize;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;

- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (id)newRequest;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (id)createRequest;
- (void)ensureFullyInitialized;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void).cxx_destruct;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (id)retrieveCapabilites;
- (void)didReceiveCKContextServiceUpdateNotification;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (id)init;
- (id)indexVersionId;

@end
