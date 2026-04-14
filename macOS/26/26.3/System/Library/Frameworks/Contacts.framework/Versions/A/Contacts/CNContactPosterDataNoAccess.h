@class NSString;

@interface CNContactPosterDataNoAccess : NSObject <CNContactPosterDataStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;

@end
