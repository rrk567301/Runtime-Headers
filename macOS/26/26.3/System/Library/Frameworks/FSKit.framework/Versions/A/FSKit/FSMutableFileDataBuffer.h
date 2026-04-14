@class LiveFSSharedMutableBuffer;

@interface FSMutableFileDataBuffer : NSObject <NSSecureCoding> {
    unsigned long long _vma;
    unsigned int _mp;
    unsigned long long _internalCapacity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) LiveFSSharedMutableBuffer *proxyOfBuffer;
@property (readonly) unsigned long long length;

+ (id)dataWithLength:(unsigned long long)a0;
+ (id)dataWithCapacity:(unsigned long long)a0;

- (id)initWithLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)ensureMappedMB:(unsigned long long)a0;
- (BOOL)ensureMapped;
- (id)initProxyFrom:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 andLength:(unsigned long long)a1;
- (void)withMutableBytes:(id /* block */)a0;

@end
