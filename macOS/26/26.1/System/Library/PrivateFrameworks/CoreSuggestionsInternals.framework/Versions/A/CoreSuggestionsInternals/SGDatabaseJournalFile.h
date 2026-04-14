@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void)write:(id)a0;
- (void)clear;
- (id)initWithPath:(id)a0;
- (id)description;
- (void)dealloc;
- (id)read;
- (void).cxx_destruct;
- (void)destroy;
- (id)init;
- (void)unlink;
- (void)destroyAndUnlinkIfEmpty;

@end
