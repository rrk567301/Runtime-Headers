@class NSString;

@interface TRITempDirScopeGuard : NSObject {
    BOOL _isDisposed;
}

@property (readonly, nonatomic) NSString *canonicalPath;
@property (readonly, nonatomic) NSString *path;

+ (id)refCountsLock;
+ (BOOL)ifUnreferencedCleanupPath:(id)a0;

- (id)initWithPath:(id)a0;
- (BOOL)dispose;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
