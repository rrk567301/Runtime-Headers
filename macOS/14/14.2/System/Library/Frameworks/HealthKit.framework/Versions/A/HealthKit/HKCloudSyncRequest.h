@class HKContextSyncRequest, NSUUID, HKChangesSyncRequest, HKMedicalIDSyncRequest, HKSummarySharingSyncRequest, HKStateSyncRequest;

@interface HKCloudSyncRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) HKChangesSyncRequest *changesSyncRequest;
@property (copy, nonatomic) HKContextSyncRequest *contextSyncRequest;
@property (copy, nonatomic) HKStateSyncRequest *stateSyncRequest;
@property (copy, nonatomic) HKMedicalIDSyncRequest *medicalIDSyncRequest;
@property (copy, nonatomic) HKSummarySharingSyncRequest *summarySharingSyncRequest;
@property (nonatomic) BOOL allowCellular;
@property (nonatomic) long long qualityOfService;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)mergeRequest:(id)a0;
- (id)requestWithChangesSyncRequest:(id)a0;
- (id)requestWithContextSyncRequest:(id)a0;
- (id)requestWithMedicalIDSyncRequest:(id)a0;
- (id)requestWithStateSyncRequest:(id)a0;
- (id)requestWithSummarySharingSyncRequest:(id)a0;

@end
