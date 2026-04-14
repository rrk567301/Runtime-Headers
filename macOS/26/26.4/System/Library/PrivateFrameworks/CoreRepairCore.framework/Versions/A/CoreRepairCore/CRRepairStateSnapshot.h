@interface CRRepairStateSnapshot : NSObject

+ (id)_deserializeRepairData:(id)a0;
+ (BOOL)_determineHWChangeWithOldData:(id)a0 newRepairData:(id)a1 unsealedData:(id)a2;
+ (id)_getChangedDataFromRCHL;
+ (id)_getCurrentUnsealedData;
+ (id)_getMergedRepairDataWithRCHL:(id)a0 unsealedData:(id)a1;
+ (id)_serializeRepairData:(id)a0;
+ (BOOL)isHardwareChangedFromOldState:(id)a0 newState:(id *)a1 options:(id)a2 error:(id *)a3;

@end
