@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    BOOL _locked;
    NSURL *_fileURL;
}

- (BOOL)isLocked;
- (void)unlock;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)lock;

@end
