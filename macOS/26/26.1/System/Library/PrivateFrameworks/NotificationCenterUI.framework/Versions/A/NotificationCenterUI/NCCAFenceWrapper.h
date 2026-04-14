@class CAFenceHandle;

@interface NCCAFenceWrapper : NSObject <NSSecureCoding> {
    CAFenceHandle *_fence;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithHandle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addToContext:(id)a0;

@end
