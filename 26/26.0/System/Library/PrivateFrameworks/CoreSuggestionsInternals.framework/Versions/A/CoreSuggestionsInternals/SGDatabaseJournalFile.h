@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (id)initWithPath:(id)a0;
- (void)clear;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)write:(id)a0;
- (void)destroy;
- (void).cxx_destruct;
- (id)read;
- (void)unlink;
- (void)destroyAndUnlinkIfEmpty;

@end
