@class NSString;

@interface TRITempDirScopeGuard : NSObject {
    char _isDisposed;
}

@property (readonly, nonatomic) NSString *canonicalPath;
@property (readonly, nonatomic) NSString *path;

+ (char)ifUnreferencedCleanupPath:(id)a0;
+ (id)refCountsLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (char)dispose;

@end
