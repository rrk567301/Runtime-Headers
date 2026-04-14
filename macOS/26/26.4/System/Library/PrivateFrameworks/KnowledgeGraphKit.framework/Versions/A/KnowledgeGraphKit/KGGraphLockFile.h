@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    BOOL _locked;
    NSURL *_fileURL;
}

- (void)unlock;
- (BOOL)isLocked;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)lock;

@end
