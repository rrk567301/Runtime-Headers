@class NSString, ANSTTensorDescriptor;

@interface ANSTTensorSurface : NSObject <ANSTTensorDataAccessing, ANSTTensorDataMutableAccessing> {
    ANSTTensorDescriptor *_tensorDescriptor;
    struct __IOSurface { } *_surfaceRef;
}

@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *tensorDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_performDataAccessWithIOSurfaceLockOptions:(unsigned int)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)initWithDescriptor:(id)a0 ioSurface:(struct __IOSurface { } *)a1 error:(id *)a2;
- (BOOL)performDataAccessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)performMutableDataAccessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1 error:(id *)a2;

@end
