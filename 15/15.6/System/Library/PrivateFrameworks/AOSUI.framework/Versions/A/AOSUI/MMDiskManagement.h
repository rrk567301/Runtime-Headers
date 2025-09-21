@interface MMDiskManagement : NSObject

+ (char)containsRecoveryPartitionAndVersion:(id *)a0 error:(id *)a1;
+ (char)hasCorrectRecoveryPartition:(id)a0;
+ (char)hasRecoveryPartition:(id *)a0;
+ (char)recoveryPartitionNeedsUpdate:(id)a0;
+ (char)systemHasTRB;

@end
