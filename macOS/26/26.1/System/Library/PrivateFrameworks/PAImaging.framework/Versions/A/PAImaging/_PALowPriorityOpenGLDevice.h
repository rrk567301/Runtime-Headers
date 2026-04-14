@class PAOpenGLDevice;

@interface _PALowPriorityOpenGLDevice : PADevice {
    PAOpenGLDevice *_openGLDevice;
}

- (id)identifier;
- (void).cxx_destruct;
- (id)initWithOpenGLDevice:(id)a0;

@end
