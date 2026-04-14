@class IOSurface;

@interface VSTCoreVertexAttributeBufferDump : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long vertexFormat;
@property (nonatomic) unsigned long long elementCount;
@property (retain, nonatomic) IOSurface *iosurface;
@property (readonly, nonatomic) unsigned long long numBytes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
