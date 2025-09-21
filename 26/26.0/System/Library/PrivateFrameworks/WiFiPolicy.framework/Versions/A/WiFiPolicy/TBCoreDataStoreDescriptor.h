@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface TBCoreDataStoreDescriptor : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription;

+ (id)tempStoresDirectoryURL;
+ (id)defaultModelURL;
+ (id)directStoreDescriptor;
+ (id)defaultPersistentStoreURLWithDirectory:(id)a0;
+ (id)clientStoreDescriptor;
+ (id)defaultStoresDirectoryURL;
+ (id)serverStoreDescriptor;
+ (id)tempStoreDescriptor;

- (id)initWithType:(unsigned long long)a0 storeURL:(id)a1 modelURL:(id)a2;
- (void).cxx_destruct;

@end
