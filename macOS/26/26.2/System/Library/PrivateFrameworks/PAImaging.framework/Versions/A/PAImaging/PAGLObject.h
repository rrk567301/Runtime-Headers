@class NSString, PAOpenGLDevice;

@interface PAGLObject : NSObject {
    PAOpenGLDevice *_device;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int objectID;
@property (readonly, nonatomic) PAOpenGLDevice *device;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)deleteIfNeeded;
- (void)_deleteOpenGLResourcesAsync;
- (void)createIfNeededWithContext:(id)a0;
- (void)deleteIfNeededWithContext:(id)a0;

@end
