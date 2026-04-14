@interface NUExportJob : NURenderJob

- (id)initWithRequest:(id)a0;
- (id)result;
- (id)exportRequest;
- (id)initWithExportRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;

@end
