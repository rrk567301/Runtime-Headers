@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    char _locked;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
- (char)lock;
- (void)unlock;
- (char)isLocked;
- (id)initWithDatabaseURL:(id)a0;

@end
