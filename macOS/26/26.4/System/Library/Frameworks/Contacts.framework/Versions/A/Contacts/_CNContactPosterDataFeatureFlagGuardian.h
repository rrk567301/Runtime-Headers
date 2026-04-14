@class NSString;
@protocol CNContactPosterDataStore;

@interface _CNContactPosterDataFeatureFlagGuardian : NSObject <CNContactPosterDataStore> {
    id<CNContactPosterDataStore> _store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;

@end
