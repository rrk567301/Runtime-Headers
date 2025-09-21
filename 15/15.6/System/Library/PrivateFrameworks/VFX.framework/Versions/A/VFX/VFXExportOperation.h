@interface VFXExportOperation : NSOperation

- (id)error;
- (float)progress;
- (char)canceled;
- (char)succeded;

@end
