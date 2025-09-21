@interface ICDelegateAccountStoreSchema : NSObject

@property (class, readonly, nonatomic) long long currentVersion;

+ (char)_createDefaultSchemaWithConnection:(id)a0 error:(id *)a1;
+ (id)dateForValue:(double)a0;
+ (id)defaultDatabasePath;
+ (char)setupWithConnection:(id)a0 error:(id *)a1;
+ (double)valueForDate:(id)a0;

@end
