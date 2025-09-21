@class NSString, CNContactPosterDataFailAccess, CNContactPosterDataXPCAccess;

@interface CNContactPosterDataInitiallyUnknownAccess : NSObject <CNContactPosterDataStore> {
    CNContactPosterDataFailAccess *_failImpl;
    CNContactPosterDataXPCAccess *_remoteImpl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)currentImpl;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;
- (id)failImpl;
- (id)remoteImpl;

@end
