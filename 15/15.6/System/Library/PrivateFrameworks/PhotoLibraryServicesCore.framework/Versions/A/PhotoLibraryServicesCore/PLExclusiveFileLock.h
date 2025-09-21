@class NSString, NSURL;

@interface PLExclusiveFileLock : NSObject <PLUnlocker> {
    NSURL *_url;
    int _fd;
}

@property (readonly, nonatomic) char isLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)unlock;
- (char)lockWithError:(id *)a0;
- (id)lockData;
- (id)lockFailure;

@end
