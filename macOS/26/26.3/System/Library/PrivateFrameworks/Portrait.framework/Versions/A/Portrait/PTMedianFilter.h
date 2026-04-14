@interface PTMedianFilter : NSObject {
    float *_data;
    float *_dataSorted;
    unsigned long long _width;
    unsigned long long _frameIndex;
}

- (void)dealloc;
- (void)reset;
- (float)filter:(float)a0;
- (id)initWithFilterWidth:(unsigned long long)a0;

@end
