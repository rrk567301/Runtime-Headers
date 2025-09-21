@interface MPFeedbackCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic, getter=isNegative) char negative;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
