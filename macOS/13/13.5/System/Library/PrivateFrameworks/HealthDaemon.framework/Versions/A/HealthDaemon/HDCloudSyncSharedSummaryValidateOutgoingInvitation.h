@class CKUserIdentity;

@interface HDCloudSyncSharedSummaryValidateOutgoingInvitation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKUserIdentity *_userIdentity;
}

+ (BOOL)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
