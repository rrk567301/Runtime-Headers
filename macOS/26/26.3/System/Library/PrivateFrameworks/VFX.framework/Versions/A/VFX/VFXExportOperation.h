@interface VFXExportOperation : NSOperation

- (BOOL)canceled;
- (float)progress;
- (id)error;
- (BOOL)succeded;

@end
