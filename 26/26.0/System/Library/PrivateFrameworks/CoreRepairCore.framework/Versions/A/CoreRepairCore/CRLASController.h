@interface CRLASController : NSObject

@property (nonatomic) struct __IOHIDDevice { } *hidDevice;
@property (nonatomic) struct __IOHIDManager { } *hidManager;
@property (nonatomic) unsigned int lasService;
@property (nonatomic) unsigned int lasConn;

- (BOOL)isUnlocked;
- (void)dealloc;
- (id)init;
- (id)_getLASHIDReport:(int)a0 withOutStatus:(int *)a1;
- (BOOL)_openLASService;
- (id)getLASPreciseAngleWithIOStatus:(int *)a0;
- (BOOL)isLAS2:(id *)a0;
- (id)getLASSerialNumberWithIOStatus:(int *)a0;
- (void)_closeLASHIDDevice;
- (void)_closeLASService;
- (BOOL)_openLASHIDDevice;
- (id)_reverseData:(id)a0;
- (void)calibrateLASWithIOStatus:(int *)a0;
- (BOOL)calibrateLASWithRetry:(unsigned long long)a0 withIOStatus:(int *)a1;
- (BOOL)checkLASAngle:(id)a0 againstLimit:(id)a1;
- (id)generateLAS2PatchItem:(id)a0;
- (id)getLASCDataWithIOStatus:(int *)a0;
- (id)getLASLockStateWithIOStatus:(int *)a0;
- (id)getLASMagFieldStateWithIOStatus:(int *)a0;
- (id)getLiveIdentifier;
- (BOOL)hardLockLAS;
- (BOOL)isFinishRepairLAS1;
- (BOOL)isFinishRepairUnlockLAS;
- (BOOL)isLAS2;
- (BOOL)isSelfRepairSupportedLASC:(id)a0;
- (BOOL)isUnlockedWithIOStatus:(int *)a0;
- (BOOL)readLASAngleFromRegister:(id *)a0;
- (BOOL)readLASRegisterFromAddress:(unsigned char)a0 outValue:(char *)a1;
- (BOOL)readLASRegistersFromAddress:(unsigned char)a0 withLen:(unsigned char)a1 outValue:(char *)a2;
- (void)setLASLockState:(unsigned char)a0 withIOStatus:(int *)a1;
- (BOOL)unlockLAS;
- (BOOL)writeLASAngleToRegister:(id)a0;
- (BOOL)writeToLASRegisterAddress:(unsigned char)a0 withValue:(unsigned char)a1;

@end
