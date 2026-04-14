@interface _IMVideoDataSource : NSObject

- (id)initWithDataSource:(id)a0;
- (id)dataSource;
- (unsigned int)pbPixelFormat;
- (unsigned long long)frameUpdateMechanism;
- (BOOL)_copyOpenGLBuffer:(struct __CVBuffer { } *)a0 screen:(int)a1 toPixelBuffer:(struct __CVBuffer { } *)a2;
- (BOOL)fillBuffer:(struct __CVBuffer { } *)a0;

@end
