@protocol NUImageProperties;

@interface NUAuxiliaryPropertiesRenderJob : NURenderJob {
    id<NUImageProperties> _imageProperties;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (BOOL)prepare:(out id *)a0;

@end
