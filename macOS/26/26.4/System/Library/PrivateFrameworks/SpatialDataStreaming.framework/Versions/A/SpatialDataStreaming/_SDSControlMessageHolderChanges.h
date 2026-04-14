@interface _SDSControlMessageHolderChanges : NSObject {
    unsigned char _replacementMessageType;
    unsigned char _changeTypeMessage;
    unsigned int _replacementMessage;
}

- (void)preserveMessage;
- (void)omitMessage;
- (void)replaceMessageWithNamedStreamRequest:(id)a0;
- (void)replaceMessageWithNamedStreamResponse:(id)a0;
- (void)replaceMessageWithSessionNewStreamAck:(id)a0;
- (void)replaceMessageWithSessionNewStreamIntent:(id)a0;
- (void)replaceMessageWithSessionNextIncomingConnectionComplete:(id)a0;
- (void)replaceMessageWithSessionNextIncomingConnectionStreamName:(id)a0;
- (void)replaceMessageWithSessionNextIncomingConnectionStreamNameAck:(id)a0;
- (void)replaceMessageWithVersionNegotiationRequest:(id)a0;
- (void)replaceMessageWithVersionNegotiationResponse:(id)a0;

@end
