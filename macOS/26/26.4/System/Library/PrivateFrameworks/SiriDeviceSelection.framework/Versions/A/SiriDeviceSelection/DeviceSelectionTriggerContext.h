@interface DeviceSelectionTriggerContext : NSObject

@property (readonly, nonatomic) BOOL isConnectedToCarPlay;
@property (readonly, nonatomic) BOOL isSiriDisplayed;
@property (readonly, nonatomic) BOOL isSiriSpeaking;

- (id)initWithIsConnectedToCarPlay:(BOOL)a0 isSiriDisplayed:(BOOL)a1 isSiriSpeaking:(BOOL)a2;

@end
