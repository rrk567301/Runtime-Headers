@class FSVolume;

@interface FSConnectShareTask : FSTask

@property (retain) FSVolume *result;

- (void).cxx_destruct;
- (void)didCompleteWithVolume:(id)a0;

@end
