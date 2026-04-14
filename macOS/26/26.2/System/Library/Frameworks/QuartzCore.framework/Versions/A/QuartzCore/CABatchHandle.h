@interface CABatchHandle : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _handle_name;
    unsigned long long _batch_name;
    unsigned int _port;
    struct SpinLock { struct { int x; } _l; } _lock;
    BOOL _invalidated;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)createFromXPCRepresentation:(id)a0;

- (void)invalidate;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)description;
- (id)init;
- (id)createXPCRepresentation;
- (void)dealloc;

@end
