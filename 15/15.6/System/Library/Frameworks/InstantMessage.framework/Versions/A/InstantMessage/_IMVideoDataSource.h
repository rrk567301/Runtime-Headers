@interface _IMVideoDataSource : NSObject

- (id)dataSource;
- (id)initWithDataSource:(id)a0;
- (char)_copyOpenGLBuffer:(struct __CVBuffer { } *)a0 screen:(int)a1 toPixelBuffer:(struct __CVBuffer { } *)a2;
- (char)fillBuffer:(struct __CVBuffer { } *)a0;
- (unsigned long long)frameUpdateMechanism;
- (unsigned int)pbPixelFormat;

@end
