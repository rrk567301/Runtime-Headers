@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (id)initWithPath:(id)a0;
- (void)destroy;
- (void)write:(id)a0;
- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)read;
- (void)dealloc;
- (void)unlink;
- (void)destroyAndUnlinkIfEmpty;

@end
