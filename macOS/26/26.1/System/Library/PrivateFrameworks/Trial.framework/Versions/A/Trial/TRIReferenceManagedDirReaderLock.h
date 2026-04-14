@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}

- (void)unlock;
- (void)dealloc;
- (id)initWithDir:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
