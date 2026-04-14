@protocol MTLTexture;

@interface CMISmartStyleColorCubeV1 : NSObject

@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) id<MTLTexture> backgroundCube;
@property (readonly, nonatomic) id<MTLTexture> foregroundCube;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBackgroundCube:(id)a0 foregroundCube:(id)a1;

@end
