@interface GTDisplayShowTextureRequest : GTDisplayShowRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long replayServicePort;
@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned int slice;
@property (nonatomic) unsigned int level;
@property (nonatomic) unsigned int depth;
@property (nonatomic) unsigned int plane;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
