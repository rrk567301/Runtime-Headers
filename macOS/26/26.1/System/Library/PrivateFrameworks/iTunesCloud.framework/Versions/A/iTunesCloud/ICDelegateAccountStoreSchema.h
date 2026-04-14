@interface ICDelegateAccountStoreSchema : NSObject

@property (class, readonly, nonatomic) long long currentVersion;

+ (double)valueForDate:(id)a0;
+ (id)dateForValue:(double)a0;
+ (id)defaultDatabasePath;
+ (BOOL)setupWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)_createDefaultSchemaWithConnection:(id)a0 error:(id *)a1;

@end
