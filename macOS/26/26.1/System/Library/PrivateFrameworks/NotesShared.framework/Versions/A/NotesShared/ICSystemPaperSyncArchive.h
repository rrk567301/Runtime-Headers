@class NSURL, NSArray, NSString;

@interface ICSystemPaperSyncArchive : NSObject {
    void /* unknown type, empty encoding */ databaseArchive;
    void /* function */ assetArchives;
}

@property (nonatomic, readonly) NSURL *databaseArchive;
@property (nonatomic, readonly) NSArray *assetArchives;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDatabaseArchive:(id)a0 assetArchives:(id)a1;

@end
