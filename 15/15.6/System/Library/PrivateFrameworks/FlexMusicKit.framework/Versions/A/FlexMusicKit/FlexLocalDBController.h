@class NSManagedObjectContext, NSArray, NSURL, NSDate, NSPersistentContainer;

@interface FlexLocalDBController : NSObject {
    NSURL *_destinationURL;
    NSPersistentContainer *_localSongDatabase;
    NSManagedObjectContext *_backgroundContext;
}

@property (readonly, nonatomic) NSArray *allSongEntries;
@property (retain, nonatomic) NSDate *lastCloudCheckDate;

- (void).cxx_destruct;
- (void)_insertFirstCloudCheckDate:(id)a0 andSave:(char)a1;
- (char)createSongEntryWithSongData:(id)a0 error:(id *)a1;
- (char)deleteFieldsForSongUID:(id)a0 deletions:(id)a1 error:(id *)a2;
- (id)initWithDestinationURL:(id)a0;
- (char)updateSongWithData:(id)a0 error:(id *)a1;

@end
