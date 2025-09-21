@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob {
    id<NUVideoProperties> _videoProperties;
}

- (void).cxx_destruct;
- (id)result;
- (char)prepare:(out id *)a0;
- (char)wantsCompleteStage;
- (char)wantsRenderStage;

@end
