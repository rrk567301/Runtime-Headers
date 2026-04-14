@class NSError, NSString, CNContactPosterDataPersistentStoreManager;

@interface _UpdateRequestVisitor : NSObject <CNContactPosterDataChangeRequestVisitor>

@property (retain, nonatomic) CNContactPosterDataPersistentStoreManager *storeManager;
@property (retain, nonatomic) NSError *lastError;
@property (nonatomic) BOOL lastResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)errorWithCode:(long long)a0;

- (void).cxx_destruct;
- (id)initWithStoreManager:(id)a0;
- (void)visitCreateRequest:(id)a0;
- (void)visitDeleteRequest:(id)a0;
- (void)visitImageUpdateRequest:(id)a0;
- (void)visitPosterUpdateRequest:(id)a0;

@end
