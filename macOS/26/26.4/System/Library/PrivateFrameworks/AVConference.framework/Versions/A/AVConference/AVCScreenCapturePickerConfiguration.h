@class AVCAuditToken;

@interface AVCScreenCapturePickerConfiguration : NSObject

@property (retain, nonatomic) AVCAuditToken *pickerClientAuditToken;

- (id)init;
- (void)dealloc;

@end
