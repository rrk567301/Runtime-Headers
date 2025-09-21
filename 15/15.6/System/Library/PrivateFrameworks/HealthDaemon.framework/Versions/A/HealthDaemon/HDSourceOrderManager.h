@class HDProfile, HDDatabaseValueCache;

@interface HDSourceOrderManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_sourceOrdersForTypeCache;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (char)addOrderedSource:(id)a0 objectTypes:(id)a1 error:(id *)a2;
- (char)createSourceOrdersWithCodables:(id)a0 error:(id *)a1;
- (id)orderedSourceIDsForObjectType:(id)a0 error:(id *)a1;
- (id)orderedSourceIDsWithUnorderedIDs:(id)a0 objectType:(id)a1 error:(id *)a2;
- (id)orderedSourcesForObjectType:(id)a0 error:(id *)a1;
- (char)resetCacheWithError:(id *)a0;
- (void)resetCacheWithTransaction:(id)a0;
- (char)updateOrderedSources:(id)a0 forObjectType:(id)a1 error:(id *)a2;

@end
