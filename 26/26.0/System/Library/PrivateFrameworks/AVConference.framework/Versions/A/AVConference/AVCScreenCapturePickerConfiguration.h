@class AVCAuditToken;

@interface AVCScreenCapturePickerConfiguration : NSObject

@property (retain, nonatomic) AVCAuditToken *pickerClientAuditToken;

- (void)dealloc;
- (id)init;

@end
