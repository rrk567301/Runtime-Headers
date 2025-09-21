@interface SCNExportOperation : NSOperation

- (id)error;
- (double)progress;
- (char)canceled;
- (char)succeded;

@end
