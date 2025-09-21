@class NSString;

@interface HMDResidentSyncClientMergePolicy : NSMergePolicy <HMFLogging> {
    unsigned char _faultLogType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (char)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (char)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;
- (id)logIdentifier;
- (id)initWithFaultLogging:(char)a0;

@end
