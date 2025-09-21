@interface MPAdvanceRepeatModeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) char preservesRepeatMode;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
