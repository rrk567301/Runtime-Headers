@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    BOOL _locked;
    NSURL *_fileURL;
}

- (BOOL)isLocked;
- (id)initWithDatabaseURL:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (BOOL)lock;

@end
