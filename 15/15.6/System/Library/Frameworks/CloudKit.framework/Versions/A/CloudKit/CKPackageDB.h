@interface CKPackageDB : NSObject

+ (char)copySQLiteFileAtPath:(id)a0 toPath:(id)a1 timeout:(double)a2 error:(id *)a3;
+ (char)moveSQLiteFileAtPath:(id)a0 toPath:(id)a1 timeout:(double)a2 error:(id *)a3;

@end
