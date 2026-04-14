@interface VFXExportOperation : NSOperation

- (BOOL)canceled;
- (id)error;
- (float)progress;
- (BOOL)succeded;

@end
