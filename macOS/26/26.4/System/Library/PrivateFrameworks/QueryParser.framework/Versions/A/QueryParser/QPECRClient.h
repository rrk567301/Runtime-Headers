@class NSString, NSMutableDictionary;
@protocol GDVisualIdentifierView;

@interface QPECRClient : NSObject <QPECRClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _viewLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    id<GDVisualIdentifierView> _view;
    NSMutableDictionary *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (void)clearCache;
- (void).cxx_destruct;
- (id)init;
- (id)visualIdentifierViewWithError:(id *)a0;
- (BOOL)isEmpty:(id)a0;
- (BOOL)coolDownECRClientSyncWithError:(id *)a0;
- (id)generateEntityRequest:(id)a0 entityFilterType:(long long)a1 mode:(long long)a2 enableBackupSearch:(BOOL)a3;
- (void)clearVisualIdentifierView;
- (void)cooldownAsync;
- (void)cooldownSync;
- (id)filterRankerItems:(id)a0 token:(id)a1 text:(id)a2 rawTokens:(id)a3 isSpaceDelimited:(BOOL)a4 groundingInfo:(id)a5;
- (id)flattenRankedResults:(id)a0;
- (id)readFromCache:(id)a0;
- (id)resolveEntitiesWithToken:(id)a0 request:(id)a1 error:(id *)a2;
- (id)visualIdentifiersWithQuery:(id)a0 entityFilterType:(long long)a1 enableBackupSearch:(BOOL)a2 error:(id *)a3;
- (id)visualIdentifiersWithText:(id)a0 text:(id)a1 rawTokenizedText:(id)a2 isSpaceDelimited:(BOOL)a3 allowPrefixSearch:(BOOL)a4 entityFilterType:(long long)a5 includeInferredNames:(BOOL)a6 allowGroundingToNamesAndEmails:(BOOL)a7 useNamesAndEmailsForNonRelations:(BOOL)a8 enableGroundedResultFiltering:(BOOL)a9 enableBackupSearch:(BOOL)a10 error:(id *)a11;
- (void)warmUpAsync;
- (BOOL)warmUpECRClientSyncWithError:(id *)a0;
- (void)warmUpSync;
- (void)writeToCacheForToken:(id)a0 data:(id)a1;

@end
