@class NSUUID, MCMUserIdentityCache, NSObject;
@protocol OS_dispatch_queue, MCMMetadata;

@interface MCMDataProtectionChangeOperation : NSObject

@property (retain, nonatomic) id<MCMMetadata> dataContainerMetadata;
@property (nonatomic) int newDataProtectionClass;
@property (nonatomic) int changeType;
@property (nonatomic) char retryIfLocked;
@property (nonatomic) char retried;
@property (retain, nonatomic) NSUUID *internalChangeID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (copy, nonatomic) id /* block */ retryStartBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)dataProtectionChangeOperationWithContainerMetadata:(id)a0 settingClass:(int)a1 retryingIfLocked:(char)a2 changeType:(int)a3 queue:(id)a4;

- (void).cxx_destruct;
- (char)_runChangeOperationNeedToRetry:(char *)a0 error:(id *)a1;
- (id)initWithContainerMetadata:(id)a0 newClass:(int)a1 retryingIfLocked:(char)a2 changeType:(int)a3 internalChangeID:(id)a4 queue:(id)a5 userIdentityCache:(id)a6;
- (id)initWithContainerMetadata:(id)a0 newClass:(int)a1 retryingIfLocked:(char)a2 changeType:(int)a3 queue:(id)a4 userIdentityCache:(id)a5;
- (void)performChangeOperation;

@end
