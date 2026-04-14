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
- (id)read;
- (void).cxx_destruct;
- (id)description;
- (void)destroy;
- (id)initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (void)unlink;
- (void)destroyAndUnlinkIfEmpty;

@end
