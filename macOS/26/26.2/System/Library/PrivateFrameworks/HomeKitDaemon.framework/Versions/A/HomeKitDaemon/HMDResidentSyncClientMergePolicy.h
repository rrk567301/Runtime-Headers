@class NSString;

@interface HMDResidentSyncClientMergePolicy : NSMergePolicy <HMFLogging> {
    unsigned char _faultLogType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithFaultLogging:(BOOL)a0;

@end
