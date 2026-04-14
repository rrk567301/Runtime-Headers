@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    BOOL _locked;
    NSURL *_fileURL;
}

- (BOOL)isLocked;
- (void)unlock;
- (BOOL)lock;
- (id)initWithDatabaseURL:(id)a0;
- (void).cxx_destruct;

@end
