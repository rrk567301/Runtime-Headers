@protocol NUImageProperties;

@interface NUAuxiliaryPropertiesRenderJob : NURenderJob {
    id<NUImageProperties> _imageProperties;
}

- (void).cxx_destruct;
- (id)result;
- (char)prepare:(out id *)a0;
- (char)wantsCompleteStage;
- (char)wantsRenderStage;

@end
