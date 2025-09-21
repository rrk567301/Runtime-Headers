@interface _SDSVersionNegotiationRequestChanges : NSObject {
    unsigned char _changeTypeConnectionId;
    unsigned int _replacementConnectionId;
    unsigned char _changeTypeRange;
    unsigned int _replacementRange;
    unsigned char _changeTypeSdsRange;
    unsigned int _replacementSdsRange;
}

- (void)omitConnectionId;
- (void)omitRange;
- (void)omitSdsRange;
- (void)preserveConnectionId;
- (void)preserveRange;
- (void)preserveSdsRange;
- (void)replaceConnectionId:(unsigned int)a0;
- (void)replaceRange:(id)a0;
- (void)replaceSdsRange:(id)a0;

@end
