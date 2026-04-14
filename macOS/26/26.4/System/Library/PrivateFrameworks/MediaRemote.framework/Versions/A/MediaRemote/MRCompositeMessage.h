@class NSArray, NSMutableArray, MRProtocolMessageOptions;

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray *_messages;
    MRProtocolMessageOptions *_transportOptions;
}

@property (readonly, nonatomic) NSArray *messages;

- (void)addMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)setTransportOptions:(id)a0;
- (id)transportOptions;

@end
