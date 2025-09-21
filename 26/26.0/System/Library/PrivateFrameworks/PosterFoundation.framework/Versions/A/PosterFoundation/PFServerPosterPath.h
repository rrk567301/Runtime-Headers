@class NSURL, PFServerPosterIdentity, NSString;

@interface PFServerPosterPath : PFPosterPath

@property (readonly, nonatomic) NSURL *snapshotCacheURL;
@property (readonly, copy, nonatomic) PFServerPosterIdentity *identity;
@property (readonly, copy, nonatomic) NSURL *providerURL;
@property (readonly, copy, nonatomic) NSURL *typeURL;
@property (readonly, copy, nonatomic) NSURL *identifierURL;
@property (readonly, copy, nonatomic) NSURL *versionsURL;
@property (readonly, copy, nonatomic) NSURL *instanceURL;
@property (readonly, copy, nonatomic) NSURL *scratchURL;
@property (readonly, copy, nonatomic) NSURL *supplementURL;
@property (readonly, copy, nonatomic) NSString *identityPathComponent;
@property (readonly, copy, nonatomic) NSString *stablePersistenceIdentifier;
@property (readonly, nonatomic, getter=isPersistable) BOOL persistable;

+ (id)pathWithProviderURL:(id)a0 identity:(id)a1;
+ (id)pathWithContainerURL:(id)a0 identity:(id)a1;
+ (id)temporaryServerPathForProvider:(id)a0 descriptorIdentifier:(id)a1 role:(id)a2;

- (BOOL)isEqual:(id)a0;
- (id)containerURL;
- (BOOL)ensureContentsURLIsReachableAndReturnError:(out id *)a0;
- (BOOL)ensureScratchURLIsReachableAndReturnError:(out id *)a0;
- (id)extendContentsReadAccessToAuditToken:(id)a0 error:(out id *)a1;
- (id)extendInstanceReadAccessToAuditToken:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToPersistable:(id)a0;
- (BOOL)isServerPosterPath;

@end
