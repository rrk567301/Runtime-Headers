@interface PAAdjustmentSerialization : NSObject

+ (id)newAdjustmentEnveloperForData:(id)a0 format:(id)a1 formatVersion:(id)a2 error:(id *)a3;
+ (id)newDescriptionForAdjustments:(id)a0 asset:(id)a1;
+ (id)operationFromAdjustment:(id)a0 error:(id *)a1;
+ (void)restoreAutoSettingsOnOperation:(id)a0 autoSettings:(id)a1;

@end
