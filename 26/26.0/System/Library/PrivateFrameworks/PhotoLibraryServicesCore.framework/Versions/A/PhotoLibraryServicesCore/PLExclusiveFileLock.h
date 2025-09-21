@class NSString, NSURL;

@interface PLExclusiveFileLock : NSObject <PLUnlocker> {
    NSURL *_url;
    int _fd;
}

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)lockWithError:(id *)a0;
- (id)lockData;
- (id)lockFailure;

@end
