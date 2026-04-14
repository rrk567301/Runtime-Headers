@interface RSSemanticImage : NSObject {
    union { float *memoryBuffer; struct __CVBuffer *pixelBuffer; } _backing;
    unsigned int _dataType;
    unsigned long long _bytesPerRow;
    unsigned long long _size;
    unsigned long long _height;
    unsigned long long _width;
    unsigned long long _channel;
    unsigned long long _backingType;
}

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;

@end
