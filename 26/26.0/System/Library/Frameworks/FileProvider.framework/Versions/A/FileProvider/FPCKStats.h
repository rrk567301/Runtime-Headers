@interface FPCKStats : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long numberOfFilesChecked;
@property (nonatomic) long long numberOfBrokenFilesInFSAndFSSnapshotCheck;
@property (nonatomic) long long numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
@property (nonatomic) long long numberOfBrokenFilesInBackupManifestCheck;
@property (nonatomic) long long numberOfBrokenFilesInReconciliationTableCheck;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
