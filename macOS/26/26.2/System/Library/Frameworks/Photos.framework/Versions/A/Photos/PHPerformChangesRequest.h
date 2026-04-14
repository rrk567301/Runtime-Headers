@class NSArray, NSString, NSMutableOrderedSet, NSMutableDictionary, PHPerformChangesInstrumentation;
@protocol PLPerformChangesRequestService;

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PLPerformChangesRequestService, PLPerformChangesRequest> {
    NSArray *_otherChanges;
    NSMutableOrderedSet *_otherChangeHandlers;
    BOOL _inService;
    id<PLPerformChangesRequestService> _service;
    NSMutableOrderedSet *_failedOnDemandRequests;
    NSMutableDictionary *_changeRequestsByUUID;
}

@property (readonly, nonatomic) BOOL hasChangeRequests;
@property (retain, nonatomic) PHPerformChangesInstrumentation *instrumentation;
@property (readonly, nonatomic) NSMutableOrderedSet *inserts;
@property (readonly, nonatomic) NSMutableOrderedSet *updates;
@property (readonly, nonatomic) NSMutableOrderedSet *deletes;
@property (readonly, nonatomic) NSMutableOrderedSet *otherChangeRequests;
@property (readonly, nonatomic) NSArray *requestSets;
@property BOOL waitForDelayedSaveActions;
@property (readonly, nonatomic) long long accessScopeOptionsRequiredForRequestedChanges;
@property (readonly, nonatomic) long long accessLevel;
@property (nonatomic) unsigned long long libraryRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (struct _xpc_type_s { } *)type;

- (id)clientDescription;
- (id)clientDisplayName;
- (id)changeRequestForUUID:(id)a0;
- (id)libraryServicesManager;
- (BOOL)decodeWithService:(id)a0 clientAuthorization:(id)a1 error:(id *)a2;
- (id)persistentStoreCoordinator;
- (id)serviceHandlerForChanges:(id)a0 clientAuthorization:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)recordUpdateRequest:(id)a0;
- (id)clientBundleID;
- (void)recordInsertRequest:(id)a0;
- (long long)determineAuthorizationStatusForChanges;
- (id)_allChangeRequests;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCCoder:(id)a0;
- (id)_failureWithError:(id)a0;
- (void)executeWithLibraryServicesManager:(id)a0 libraryName:(const char *)a1 executionContext:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (void)recordFailedOnDemandRequest:(id)a0;
- (void)executeWithService:(id)a0 reply:(id /* block */)a1;
- (void)didSendChangesToServiceWithResult:(BOOL)a0;
- (id)errorWithLocalizedDescription:(id)a0;
- (void)notifyChangesTransactionFailedWithLazyPhotoLibrary:(id)a0 error:(id)a1;
- (BOOL)hasObjectChangeRequests;
- (void)recordDeleteRequest:(id)a0;
- (void)discardUnsupportedLimitedLibraryChangeRequests;
- (id)init;
- (void)recordOtherChangeRequest:(id)a0;
- (void)setChangeRequest:(id)a0 forUUID:(id)a1;
- (BOOL)_isSupportedLimitedLibraryChangeRequest:(id)a0;

@end
