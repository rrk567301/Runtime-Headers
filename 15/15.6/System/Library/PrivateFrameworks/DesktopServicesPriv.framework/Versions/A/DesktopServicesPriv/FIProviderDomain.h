@class NSString, NSURL, NSError, FPProviderDomain;

@interface FIProviderDomain : NSObject {
    struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } _cachedSyncsTrash;
    NSURL *_rootURL;
    struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _replicatedKnownFolders;
    struct TDSMutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } fMutex; } _lock;
}

@property (readonly, nonatomic) unsigned long long cachePolicy;
@property char asyncResultAvailable;
@property (retain) FPProviderDomain *asyncFetchedDomain;
@property (retain) NSError *asyncError;
@property (readonly, nonatomic) NSString *domainID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *rootURL;
@property (readonly, nonatomic) FPProviderDomain *domain;
@property (readonly, nonatomic) char expectFPItems;
@property (readonly, nonatomic) char supportsSyncingTrash;
@property (readonly, nonatomic, getter=isUsingFPFS) char useFPFS;
@property (readonly, nonatomic) char isFPv2;
@property (readonly, nonatomic) char isiCloudDriveProvider;
@property (readonly, nonatomic) char isMainiCloudDriveDomain;
@property (readonly, nonatomic) char isDataSeparatedDomain;
@property (readonly, nonatomic) char isLocalStorageDomain;
@property (readonly, nonatomic) char isExternalDeviceDomain;
@property (readonly, nonatomic) unsigned long long replicatedKnownFolders;
@property (readonly, nonatomic) unsigned long long disconnectionState;
@property (readonly, nonatomic) char supportsEnumeration;

+ (id)providerDomainForDomain:(id)a0;
+ (id)providerDomainForID:(id)a0 cachePolicy:(unsigned long long)a1 error:(id *)a2;
+ (id)providerDomainForItem:(id)a0 cachePolicy:(unsigned long long)a1 error:(id *)a2;
+ (id)providerDomainForRootURL:(id)a0 cachePolicy:(unsigned long long)a1 error:(id *)a2;
+ (id)providerDomainForURL:(id)a0 cachePolicy:(unsigned long long)a1 error:(id *)a2;
+ (id)rootURLForProviderDomainID:(id)a0 cachePolicy:(unsigned long long)a1 error:(id *)a2;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDomain:(id)a0;
- (id)initWithDomainID:(id)a0 cachePolicy:(unsigned long long)a1 rootURL:(id)a2 domain:(id)a3;
- (char)updateRootURLIfDetached;
- (id)urlForKnownFolder:(unsigned long long)a0;

@end
