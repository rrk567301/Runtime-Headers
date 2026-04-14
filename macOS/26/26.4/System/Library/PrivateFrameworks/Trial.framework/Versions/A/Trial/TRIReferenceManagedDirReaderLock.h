@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}

- (id)initWithDir:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
