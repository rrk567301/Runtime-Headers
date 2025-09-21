@protocol AVFoundationReceiving;

@interface AVFoundationReceiver : NSObject

@property (retain, nonatomic) id<AVFoundationReceiving> receiver;
@property (nonatomic) char activateAttentionDetection;
@property (nonatomic) char activateEyeRelief;
@property (nonatomic) char activatePersonDetection;
@property (nonatomic) char running;

- (void).cxx_destruct;
- (id)initForReceiver:(id)a0 activateAttentionDetection:(char)a1 activateEyeRelief:(char)a2 activatePersonDetection:(char)a3;

@end
