@class NSSet, NSArray, NSDictionary, NSError, NSString;

@interface PhotoAnalysis.PhotoLibraryService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisPhotoLibraryServiceProtocol> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
    void /* unknown type, empty encoding */ _operationID;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)updateKeyAssetOfSocialGroupsWithUUIDs:(NSSet *)a0 reply:(void (^)(NSError *))a1;
- (void)computeCacheDidLoad:(void (^)(NSError *))a0;
- (void)curatedAssetsFromAssetUUIDs:(NSArray *)a0 options:(NSDictionary *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)extendedCuratedAssetsFromAssetUUIDs:(NSArray *)a0 options:(NSDictionary *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)keyAssetFromAssetUUIDs:(NSArray *)a0 inAllAssets:(NSArray *)a1 reply:(void (^)(NSString *, NSError *))a2;

@end
