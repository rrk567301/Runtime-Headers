@class NSArray, NSMutableArray, MRProtocolMessageOptions;

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray *_messages;
    MRProtocolMessageOptions *_transportOptions;
}

@property (readonly, nonatomic) NSArray *messages;

- (id)init;
- (id)description;
- (void)addMessage:(id)a0;
- (void).cxx_destruct;
- (void)setTransportOptions:(id)a0;
- (id)transportOptions;

@end
