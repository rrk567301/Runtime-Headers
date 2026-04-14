@class NSString;

@interface TRITempDirScopeGuard : NSObject {
    BOOL _isDisposed;
}

@property (readonly, nonatomic) NSString *canonicalPath;
@property (readonly, nonatomic) NSString *path;

+ (id)refCountsLock;
+ (BOOL)ifUnreferencedCleanupPath:(id)a0;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)init;
- (BOOL)dispose;
- (void)dealloc;

@end
