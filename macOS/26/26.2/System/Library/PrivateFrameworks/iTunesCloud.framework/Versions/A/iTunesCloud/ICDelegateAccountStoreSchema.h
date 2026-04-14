@interface ICDelegateAccountStoreSchema : NSObject

@property (class, readonly, nonatomic) long long currentVersion;

+ (BOOL)setupWithConnection:(id)a0 error:(id *)a1;
+ (id)dateForValue:(double)a0;
+ (id)defaultDatabasePath;
+ (double)valueForDate:(id)a0;
+ (BOOL)_createDefaultSchemaWithConnection:(id)a0 error:(id *)a1;

@end
