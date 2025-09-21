@class NSString;

@interface _PASDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    unsigned long long _readCursor;
    int _fd;
    char _written;
    char _dead;
}

@property (readonly, nonatomic) char isFullyRead;
@property (readonly, nonatomic) char isAlive;
@property (readonly, nonatomic) unsigned long long length;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithPath:(id)a0;
- (void)write:(id)a0;
- (void)destroy;
- (void)unlink;
- (id)read;
- (void)destroyAndUnlinkIfEmpty;

@end
