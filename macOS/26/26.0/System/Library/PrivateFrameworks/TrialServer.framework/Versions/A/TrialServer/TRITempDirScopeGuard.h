@class NSString;

@interface TRITempDirScopeGuard : NSObject {
    BOOL _isDisposed;
}

@property (readonly, nonatomic) NSString *canonicalPath;
@property (readonly, nonatomic) NSString *path;

+ (id)refCountsLock;
+ (BOOL)ifUnreferencedCleanupPath:(id)a0;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)dispose;
- (void).cxx_destruct;

@end
