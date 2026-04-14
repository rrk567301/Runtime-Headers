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
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;

- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (id)newRequest;
- (id)createRequest;
- (id)retrieveCapabilites;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (id)indexVersionId;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (id)init;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (void)ensureFullyInitialized;
- (void)didReceiveCKContextServiceUpdateNotification;
- (id)initWithDefaultRequestType:(unsigned long long)a0;

@end
