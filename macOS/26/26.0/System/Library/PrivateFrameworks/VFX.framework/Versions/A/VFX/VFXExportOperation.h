@interface VFXExportOperation : NSOperation

- (float)progress;
- (BOOL)canceled;
- (id)error;
- (BOOL)succeded;

@end
