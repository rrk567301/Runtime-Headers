@class MRNowPlayingState;

@interface MRSetStateMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}

@property (readonly, nonatomic) MRNowPlayingState *state;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithNowPlayingState:(id)a0 encoding:(long long)a1;

@end
