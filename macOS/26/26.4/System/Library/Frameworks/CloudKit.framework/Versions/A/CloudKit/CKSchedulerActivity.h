@class CKContainerID, NSString, NSArray, NSDate, CKContainer, NSDictionary, NSObject, CKXPCActivity, CKBGSystemTask;
@protocol OS_xpc_object;

@interface CKSchedulerActivity : NSObject <CKPropertiesDescription, NSCopying>

@property (copy, nonatomic) CKContainerID *containerID;
@property BOOL userRequestedBackupTask;
@property BOOL shouldDefer;
@property (readonly, nonatomic) CKContainer *nullableContainer;
@property (retain) CKContainer *container;
@property (retain) CKBGSystemTask *backgroundTask;
@property (retain) CKXPCActivity *deprecated_backgroundTask;
@property (copy) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (copy) NSString *fileProtectionType;
@property (copy) NSArray *relatedApplicationBundleIdentifiers;
@property (copy) NSDictionary *additionalXPCActivityCriteria;
@property BOOL overrideRateLimiting;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long priority;
@property unsigned long long expectedUploadSizeBytes;
@property unsigned long long expectedDownloadSizeBytes;
@property (copy) NSDate *earliestStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRelatedApplicationBundleIdentifiersForContainer:(id)a0;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 container:(id)a1 containerID:(id)a2 priority:(long long)a3;
- (id)initWithIdentifier:(id)a0 containerID:(id)a1 priority:(long long)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 container:(id)a1 priority:(long long)a2;
- (id)redactedDescription;

@end
