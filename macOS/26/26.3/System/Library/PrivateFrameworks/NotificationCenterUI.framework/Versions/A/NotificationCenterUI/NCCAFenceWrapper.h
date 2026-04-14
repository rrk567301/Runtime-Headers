@class CAFenceHandle;

@interface NCCAFenceWrapper : NSObject <NSSecureCoding> {
    CAFenceHandle *_fence;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithHandle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addToContext:(id)a0;

@end
