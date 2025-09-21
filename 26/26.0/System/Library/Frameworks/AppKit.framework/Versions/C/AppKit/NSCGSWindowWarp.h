@interface NSCGSWindowWarp : NSObject {
    unsigned long long _width;
    unsigned long long _height;
    float *_points;
}

- (void)dealloc;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;

@end
