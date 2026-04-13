@class NSString, AMSThreadSafeSet, NSArray, ACAccount;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject

@property (class, readonly) AMSThreadSafeSet *globalBagValueStorage;

@property (copy) ACAccount *account;
@property (weak) id<AMSBagDataSourceProtocol> dataSource;
@property (retain) NSString *key;
@property (retain) NSArray *transformBlocks;
@property unsigned long long valueType;
@property struct shared_ptr<AMSCore::Bag> { struct Bag *__ptr_; struct __shared_weak_count *__cntrl_; } bag;
@property (readonly, getter=isLoaded) BOOL loaded;

+ (id)_valueFromDictionary:(id)a0 forBagKey:(id)a1;
+ (BOOL)_value:(id)a0 isKindOfValueType:(unsigned long long)a1;
+ (id)bagValueWithKey:(id)a0 valueType:(unsigned long long)a1 valuePromise:(id)a2;
+ (id)failingBagValueWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
+ (id)frozenBagValueWithKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)valueWithError:(id *)a0;
- (void)valueWithCompletion:(id /* block */)a0;
- (id)valuePromise;
- (id)initWithBag:(struct shared_ptr<AMSCore::Bag> { struct Bag *x0; struct __shared_weak_count *x1; })a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (id)_processedDefaultValue:(id)a0;
- (void)_applyTransformsToValue:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (id)transformWithBlock:(id /* block */)a0;
- (id)_bagKeyInfo;

@end
