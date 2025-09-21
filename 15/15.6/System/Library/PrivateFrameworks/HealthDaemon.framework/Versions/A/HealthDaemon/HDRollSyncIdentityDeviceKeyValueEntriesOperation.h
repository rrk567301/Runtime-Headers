@class HDSyncIdentity;

@interface HDRollSyncIdentityDeviceKeyValueEntriesOperation : HDJournalableOperation {
    HDSyncIdentity *_oldSyncIdentity;
    HDSyncIdentity *_newSyncIdentity;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOldSyncIdentity:(id)a0 newSyncIdentity:(id)a1;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
