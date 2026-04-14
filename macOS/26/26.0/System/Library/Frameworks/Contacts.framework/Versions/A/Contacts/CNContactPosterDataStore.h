@class NSString, NSObject;
@protocol OS_os_log, CNContactPosterDataStore;

@interface CNContactPosterDataStore : NSObject <CNContactPosterDataStore>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) id<CNContactPosterDataStore> impl;
@property (readonly) long long maximumContactPostersPerContact;
@property (readonly) long long maximumContactImagesPerContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentProcessLacksPosterAPIAccess;
+ (BOOL)currentProcessLacksPosterAPIAccess_impl;
+ (id)implForAccessStrategy:(unsigned long long)a0;
+ (id)inMemoryStore;
+ (id)inProcessStore;
+ (BOOL)shouldUseDirectAccess;
+ (void)warnAboutLackOfPosterAPIAccess;
+ (id)xpcStore;

- (id)initWithImpl:(id)a0;
- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;
- (id)initWithAccessStrategy:(unsigned long long)a0;
- (id)initWithStoreManager:(id)a0;

@end
