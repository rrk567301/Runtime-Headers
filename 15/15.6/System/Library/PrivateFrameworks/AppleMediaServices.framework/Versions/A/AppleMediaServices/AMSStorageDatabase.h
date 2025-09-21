@class NSObject, NSString, AMSSQLiteConnection;
@protocol OS_dispatch_queue;

@interface AMSStorageDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain) AMSSQLiteConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isFeatureSupported;
+ (id)sharedDatabaseWithDomain:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)initWithDomain:(id)a0;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (char)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)_allKeysPrefixedByDomainWithError:(id *)a0;
- (id)_cachePath;
- (id)_convertToDataWithValue:(id)a0 valueType:(long long)a1 error:(id *)a2;
- (id)_convertToValueWithData:(id)a0 valueType:(long long)a1 error:(id *)a2;
- (id)_dataForPlistValue:(id)a0 error:(id *)a1;
- (void)_performTransaction:(id /* block */)a0;
- (id)_plistValueForData:(id)a0 error:(id *)a1;
- (char)_setValueData:(id)a0 valueType:(long long)a1 forKey:(id)a2 error:(id *)a3;
- (long long)_valueTypeForValue:(id)a0;
- (id)allKeyValuesWithError:(id *)a0;
- (id)allKeysForDomain:(id)a0 withError:(id *)a1;
- (char)booleanForKey:(id)a0 error:(id *)a1;
- (char)connection:(id)a0 needsResetForCorruptionError:(id)a1 error:(out id *)a2;
- (char)deleteForKey:(id)a0 error:(id *)a1;
- (double)doubleForKey:(id)a0 error:(id *)a1;
- (long long)integerForKey:(id)a0 error:(id *)a1;
- (id)isLassetAndReturnError:(id *)a0;
- (char)setBoolean:(char)a0 forKey:(id)a1 error:(id *)a2;
- (char)setDouble:(double)a0 forKey:(id)a1 error:(id *)a2;
- (char)setInteger:(long long)a0 forKey:(id)a1 error:(id *)a2;
- (char)setIsLasset:(id)a0 error:(id *)a1;
- (id)sizeWithError:(id *)a0;

@end
