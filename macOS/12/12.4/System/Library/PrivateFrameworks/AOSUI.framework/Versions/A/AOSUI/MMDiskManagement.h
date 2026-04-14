@interface MMDiskManagement : NSObject

+ (BOOL)systemHasTRB;
+ (BOOL)hasCorrectRecoveryPartition:(id)a0;
+ (BOOL)containsRecoveryPartitionAndVersion:(id *)a0 error:(id *)a1;
+ (BOOL)recoveryPartitionNeedsUpdate:(id)a0;
+ (BOOL)hasRecoveryPartition:(id *)a0;

@end
