@interface MRGetVolumeMutedResultMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) char muted;

- (unsigned long long)type;
- (id)initWithMuted:(char)a0;

@end
