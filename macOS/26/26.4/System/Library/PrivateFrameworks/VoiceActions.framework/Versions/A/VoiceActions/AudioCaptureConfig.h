@class NSString;

@interface AudioCaptureConfig : NSObject

@property (nonatomic) long long leftOfStartFrameOffset;
@property (nonatomic) long long rightOfEndFrameOffset;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
