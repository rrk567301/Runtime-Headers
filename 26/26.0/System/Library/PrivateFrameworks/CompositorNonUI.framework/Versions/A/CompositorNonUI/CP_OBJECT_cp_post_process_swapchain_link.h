@protocol MTLTexture, MTLBuffer;

@interface CP_OBJECT_cp_post_process_swapchain_link : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long linkID;
@property (retain, nonatomic) id<MTLTexture> depthTexture;
@property (retain, nonatomic) id<MTLTexture> trackingAreasTexture;
@property (retain, nonatomic) id<MTLBuffer> trackingAreasBuffer;

- (id)initPrivate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
