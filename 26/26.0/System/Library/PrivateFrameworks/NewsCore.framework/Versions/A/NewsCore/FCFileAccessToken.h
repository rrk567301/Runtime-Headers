@class NSURL, NSFileCoordinator;
@protocol NSFileCoordinationRetainedAccess;

@interface FCFileAccessToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSFileCoordinator *fileCoordinator;
@property (readonly, nonatomic) id<NSFileCoordinationRetainedAccess> retainedAccess;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForReadingURL:(id)a0 error:(id *)a1;
- (id)initForWritingURL:(id)a0 error:(id *)a1;
- (id)initWithType:(long long)a0 fileURL:(id)a1 fileCoordinator:(id)a2 retainedAccess:(id)a3;

@end
