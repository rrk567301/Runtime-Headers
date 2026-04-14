@class NSString, NSUserDefaults;

@interface IADefaultsDataStore : NSObject

@property (readonly, nonatomic) NSUserDefaults *defaultsHandle;
@property (readonly, nonatomic) NSString *datastoreName;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)_createErrorWithDescription:(id)a0 code:(long long)a1 error:(id *)a2;
- (BOOL)_validName:(id)a0;
- (id)createDataStoreObjectWithName:(id)a0 withType:(id)a1 withError:(id *)a2;
- (BOOL)deleteDataStoreObject:(id)a0 withError:(id *)a1;
- (id)getObjectWithName:(id)a0 withType:(id)a1 withError:(id *)a2;
- (BOOL)objectExistsWithName:(id)a0 andType:(id)a1 withError:(id *)a2;

@end
