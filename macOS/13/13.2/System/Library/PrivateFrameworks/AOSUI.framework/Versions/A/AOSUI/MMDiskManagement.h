@interface MMDiskManagement : NSObject

+ (BOOL)containsRecoveryPartitionAndVersion:(id *)a0 error:(id *)a1;
+ (BOOL)recoveryPartitionNeedsUpdate:(id)a0;
+ (BOOL)systemHasTRB;
+ (BOOL)hasRecoveryPartition:(id *)a0;
+ (BOOL)hasCorrectRecoveryPartition:(id)a0;

@end
