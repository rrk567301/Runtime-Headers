@interface NUExportJob : NURenderJob

- (id)result;
- (id)initWithRequest:(id)a0;
- (BOOL)wantsCompleteStage;
- (id)scalePolicy;
- (id)initWithExportRequest:(id)a0;
- (id)exportRequest;

@end
