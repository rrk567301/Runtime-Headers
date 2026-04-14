@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void)write:(id)a0;
- (id)initWithPath:(id)a0;
- (void)destroy;
- (void)clear;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)read;
- (void)dealloc;
- (void)unlink;
- (void)destroyAndUnlinkIfEmpty;

@end
