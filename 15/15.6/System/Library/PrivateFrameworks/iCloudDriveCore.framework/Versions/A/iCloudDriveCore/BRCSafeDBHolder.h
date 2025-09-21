@class NSURL, BRCPQLConnection;

@interface BRCSafeDBHolder : NSObject {
    NSURL *_databaseURL;
}

@property (readonly, nonatomic) BRCPQLConnection *db;

+ (id)newSafeDBHolder:(id)a0 withDatabaseURL:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (char)closeWithError:(id *)a0;
- (void)asyncClose;
- (void)asyncCloseWithCompletionHandler:(id /* block */)a0;
- (void)closeDatabaseSynchronously:(char)a0 dispatchToSerialQueue:(char)a1 completionHandler:(id /* block */)a2;

@end
