@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}

- (void)unlock;
- (id)initWithDir:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
