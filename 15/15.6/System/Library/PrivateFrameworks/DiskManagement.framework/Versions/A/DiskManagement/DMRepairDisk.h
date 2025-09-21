@interface DMRepairDisk : NSObject {
    id _instPriv;
}

@property char kextcacheEnabled;

- (void)dealloc;
- (id)init;
- (id)initWithManager:(id)a0;
- (int)beginPartitionMapVerifyForDisk:(struct __DADisk { } *)a0;
- (int)beginPartitionMapRepairForDisk:(struct __DADisk { } *)a0;
- (int)beginPartitionMapVerifyOrRepairForDisk:(struct __DADisk { } *)a0 repair:(char)a1;
- (int)beginRepairEFISystemPartition:(struct __DADisk { } *)a0 mode:(unsigned int)a1;
- (int)beginResetUserPermissionsForDisk:(struct __DADisk { } *)a0 forUID:(long long)a1 level:(long long)a2;
- (int)beginStoragesystemFilesystemRepairForDisk:(struct __DADisk { } *)a0;
- (int)beginStoragesystemFilesystemVerifyForDisk:(struct __DADisk { } *)a0;
- (int)beginStoragesystemFilesystemVerifyOrRepairForDisk:(struct __DADisk { } *)a0 repair:(char)a1;
- (char)canRepairPartitionMapForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (char)canRepairStoragesystemFilesystemForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (char)canVerifyPartitionMapForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (char)canVerifyStoragesystemFilesystemForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (void)cancelCurrentOperation;
- (id)userAccountsForDisk:(struct __DADisk { } *)a0 getError:(int *)a1;

@end
