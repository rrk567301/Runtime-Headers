@protocol MTLBuffer;

@interface CCTextureHistogram : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ minPixelValue;
@property (nonatomic) void /* unknown type, empty encoding */ maxPixelValue;
@property (nonatomic) unsigned long long binCount;
@property (nonatomic) unsigned long long componentCount;
@property (retain, nonatomic) id<MTLBuffer> bins;

- (void).cxx_destruct;
- (id)init;

@end
