@protocol _TtP18PodcastsFoundation42MAPIResponseDatabaseObjectProviderDelegate_;

@interface MTMAPIResponseDatabaseObjectProvider : NSObject <NSFetchedResultsControllerDelegate> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ databaseObjectsCache;
    void /* unknown type, empty encoding */ needsParsing;
    void /* unknown type, empty encoding */ showsFRC;
    void /* unknown type, empty encoding */ episodesFRC;
}

@property (nonatomic, retain) id<_TtP18PodcastsFoundation42MAPIResponseDatabaseObjectProviderDelegate_> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)a0;
- (id)initWithResponse:(id)a0;
- (id)databaseObjectWithStoreID:(long long)a0 contentType:(long long)a1;

@end
