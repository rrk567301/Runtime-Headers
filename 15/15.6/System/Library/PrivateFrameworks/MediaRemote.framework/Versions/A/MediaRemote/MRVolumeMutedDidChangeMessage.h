@class NSString;

@interface MRVolumeMutedDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) char muted;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithMuted:(char)a0 outputDeviceUID:(id)a1;

@end
