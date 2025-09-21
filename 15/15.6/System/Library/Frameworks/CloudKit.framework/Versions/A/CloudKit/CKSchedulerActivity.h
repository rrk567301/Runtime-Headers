@class CKContainerID, NSString, NSArray, NSDate, CKContainer, NSDictionary, NSObject, CKXPCActivity;
@protocol OS_xpc_object;

@interface CKSchedulerActivity : NSObject <CKPropertiesDescription, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CKContainerID *containerID;
@property (nonatomic) long long priority;
@property char userRequestedBackupTask;
@property char shouldDefer;
@property (readonly, nonatomic) CKContainer *nullableContainer;
@property (retain) CKContainer *container;
@property (retain) CKXPCActivity *ckXPCActivity;
@property (copy) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (copy) NSArray *relatedApplicationBundleIdentifiers;
@property (copy) NSDictionary *additionalXPCActivityCriteria;
@property char overrideRateLimiting;
@property unsigned long long expectedTransferSizeBytes;
@property (copy) NSDate *earliestStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRelatedApplicationBundleIdentifiersForContainer:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithIdentifier:(id)a0 container:(id)a1 priority:(long long)a2;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithIdentifier:(id)a0 container:(id)a1 containerID:(id)a2 priority:(long long)a3;
- (id)initWithIdentifier:(id)a0 containerID:(id)a1 priority:(long long)a2;

@end
