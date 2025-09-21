@class NSString, NSUserDefaults;

@interface IADefaultsDataStore : NSObject

@property (readonly, nonatomic) NSUserDefaults *defaultsHandle;
@property (readonly, nonatomic) NSString *datastoreName;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (char)_createErrorWithDescription:(id)a0 code:(long long)a1 error:(id *)a2;
- (char)_validName:(id)a0;
- (id)createDataStoreObjectWithName:(id)a0 withType:(id)a1 withError:(id *)a2;
- (char)deleteDataStoreObject:(id)a0 withError:(id *)a1;
- (id)getObjectWithName:(id)a0 withType:(id)a1 withError:(id *)a2;
- (char)objectExistsWithName:(id)a0 andType:(id)a1 withError:(id *)a2;

@end
