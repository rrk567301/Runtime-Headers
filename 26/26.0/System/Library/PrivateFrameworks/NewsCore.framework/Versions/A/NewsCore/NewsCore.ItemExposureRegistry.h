@class NSArray;

@interface NewsCore.ItemExposureRegistry : NSObject <FCItemExposureRegistryType> {
    void /* unknown type, empty encoding */ fileURL;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ accessQueue;
}

@property (nonatomic, readonly) NSArray *allExposedItemIDs;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)eraseAll;
- (id)exposuresForItemIDs:(id)a0;
- (void)pruneToMaxCount:(long long)a0;
- (void)registerExposures:(id)a0;
- (void)removeExposureForItemID:(id)a0;
- (id)subsetOfItemIDs:(id)a0 accessedSinceDate:(id)a1;
- (id)toJSON;
- (void)willAccessItemIDs:(id)a0;

@end
