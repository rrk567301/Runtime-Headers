@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob {
    id<NUVideoProperties> _videoProperties;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (BOOL)prepare:(out id *)a0;

@end
