@class NSString, NSMutableArray;
@protocol CNContactPosterDataStore;

@interface _CNContactPosterDataStoreSpy : NSObject <CNContactPosterDataStore> {
    id<CNContactPosterDataStore> _store;
}

@property (readonly) NSMutableArray *fetchRequests;
@property (readonly) NSMutableArray *countRequests;
@property (readonly) NSMutableArray *createRequests;
@property (readonly) NSMutableArray *deleteRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStore:(id)a0;
- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;

@end
