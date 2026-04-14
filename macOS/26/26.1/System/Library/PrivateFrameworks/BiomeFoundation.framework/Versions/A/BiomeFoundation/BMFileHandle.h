@class BMFileAttributes, NSFileHandle;

@interface BMFileHandle : NSObject <NSSecureCoding> {
    BOOL _initialized;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int fd;
@property (readonly, nonatomic) int error;
@property (readonly, nonatomic) BMFileAttributes *attributes;
@property (readonly, nonatomic) BOOL isStale;
@property (readonly, nonatomic) NSFileHandle *nsFileHandle;

+ (id)new;

- (void)performWithInProcessLock:(id /* block */)a0;
- (id)_initWithFileDescriptor:(int)a0 attributes:(id)a1;
- (BOOL)overwriteWithData:(id)a0 error:(id *)a1;
- (id)readDataWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFileDescriptor:(int)a0 attributes:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
