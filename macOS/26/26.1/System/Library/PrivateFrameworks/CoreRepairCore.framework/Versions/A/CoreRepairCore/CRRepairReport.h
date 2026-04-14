@interface CRRepairReport : NSObject

+ (BOOL)_checkComponentResealedWithRCHL:(int)a0 usedPart:(BOOL *)a1 error:(id *)a2;
+ (BOOL)checkComponentFailed:(int)a0 error:(id *)a1;
+ (BOOL)checkComponentResealed:(int)a0 usedPart:(BOOL *)a1 error:(id *)a2;
+ (BOOL)checkComponentUnsealed:(int)a0 error:(id *)a1;
+ (BOOL)checkNonSecureRepair:(int)a0 error:(id *)a1;
+ (id)determineRepairStatus:(id)a0 repairHistory:(id)a1;
+ (id)generateReport:(id)a0 error:(id *)a1;
+ (int)getComponentState:(int)a0 error:(id *)a1;
+ (id)getRepairDate:(int)a0;
+ (id)getSupportedComponents;
+ (void)insertItem:(id)a0 item:(id)a1;
+ (BOOL)isSelfRepairedComponent:(int)a0;
+ (id)populateDCSignedComponents;
+ (id)populateIssueComponents;
+ (id)populateRCHLHistory;
+ (id)populateUnsealedComponents;

@end
