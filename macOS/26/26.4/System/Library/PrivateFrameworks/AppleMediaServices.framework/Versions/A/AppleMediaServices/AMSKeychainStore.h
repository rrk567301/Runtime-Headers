@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMSKeychainStore : NSObject

@property (retain) NSObject<OS_dispatch_queue> *keychainQueue;
@property (readonly, nonatomic) void /* function */ *storeSecItemAddFunc;
@property (readonly, nonatomic) void /* function */ *storeSecItemCopyMatchingFunc;
@property (readonly, nonatomic) void /* function */ *storeSecItemDeleteFunc;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *keychainAccessGroup;

+ (BOOL)processIsEntitledToUse:(id)a0;

- (void).cxx_destruct;
- (struct __CFDictionary { } *)_copyKeychainQuery;
- (BOOL)_removeDataFromKeychain;
- (id)_retrieveData;
- (BOOL)_storeData:(id)a0;
- (BOOL)deleteData;
- (id)deleteDataPromise;
- (id)initWithIdentifier:(id)a0 service:(id)a1 keychainAccessGroup:(id)a2;
- (id)initWithIdentifier:(id)a0 service:(id)a1 keychainAccessGroup:(id)a2 keychainAddFunc:(void /* function */ *)a3 keychainCopyFunc:(void /* function */ *)a4 keychainDeleteFunc:(void /* function */ *)a5;
- (id)retrieveData;
- (id)retrieveDataPromise;
- (BOOL)storeData:(id)a0;
- (id)storeDataPromise:(id)a0;

@end
