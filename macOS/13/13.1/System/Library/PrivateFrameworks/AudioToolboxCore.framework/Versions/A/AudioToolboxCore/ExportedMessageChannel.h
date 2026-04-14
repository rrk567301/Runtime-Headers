@class AUMessageChannel_XPC;

@interface ExportedMessageChannel : NSObject <AUAudioUnitMessageChannelProtocol> {
    AUMessageChannel_XPC *_messageChannel;
}

- (void).cxx_destruct;
- (void)onCallRemoteAU:(id)a0 reply:(id /* block */)a1;
- (id)initWithMessageChannel:(id)a0;

@end
