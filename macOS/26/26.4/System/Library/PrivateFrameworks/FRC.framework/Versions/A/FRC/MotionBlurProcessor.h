@class NSObject;
@protocol OS_os_log, MTLDevice;

@interface MotionBlurProcessor : NSObject {
    id<MTLDevice> _device;
    int _width;
    int _height;
    float _timeScale;
    int _tileSize;
    int _searchRange;
    NSObject<OS_os_log> *_logger;
}

- (int)tileSize;
- (float)timeScale;
- (void).cxx_destruct;
- (id)createTextureBufferForTilesWithWidth:(int)a0 height:(int)a1;
- (id)createTextureBufferWithWidth:(int)a0 height:(int)a1;
- (id)createWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 width:(int)a1 height:(int)a2;
- (int)searchRange;

@end
