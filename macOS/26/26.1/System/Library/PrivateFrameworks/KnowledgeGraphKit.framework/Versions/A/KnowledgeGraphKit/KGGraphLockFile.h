@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    BOOL _locked;
    NSURL *_fileURL;
}

- (void)unlock;
- (BOOL)isLocked;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)lock;
- (void).cxx_destruct;

@end
