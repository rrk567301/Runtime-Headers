@interface TMLocalSnapshot : NSObject

+ (id)dateFromLocalSnapshotName:(id)a0;
+ (id)legacyLocalSnapshotNameFromDate:(id)a0;
+ (id)localSnapshotBackupRootPathForDate:(id)a0 unitTest:(char)a1;
+ (id)localSnapshotBasePathForUnitTesting:(char)a0;
+ (id)localSnapshotNameFromDate:(id)a0;

@end
