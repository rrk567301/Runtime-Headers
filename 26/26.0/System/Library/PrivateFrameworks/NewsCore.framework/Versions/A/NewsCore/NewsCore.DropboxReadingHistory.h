@class NSSet;

@interface NewsCore.DropboxReadingHistory : NSObject <FCReadingHistoryType> {
    void /* unknown type, empty encoding */ todayDropbox;
    void /* unknown type, empty encoding */ articleExposureRegistry;
    void /* unknown type, empty encoding */ lazyDropboxData;
}

@property (nonatomic, readonly) NSSet *allReadArticleIDs;
@property (nonatomic, readonly) NSSet *allSeenArticleIDs;

- (id)firstSeenDateFor:(id)a0;
- (id)init;
- (id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)a0;
- (id)readDateFor:(id)a0;
- (void).cxx_destruct;

@end
