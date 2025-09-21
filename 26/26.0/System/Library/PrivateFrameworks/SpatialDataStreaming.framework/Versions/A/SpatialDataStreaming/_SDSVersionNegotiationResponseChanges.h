@interface _SDSVersionNegotiationResponseChanges : NSObject {
    unsigned char _changeTypeConnectionId;
    unsigned int _replacementConnectionId;
    unsigned char _changeTypeResolvedVersion;
    unsigned int _replacementResolvedVersion;
    unsigned char _changeTypeSdsResolvedVersion;
    unsigned int _replacementSdsResolvedVersion;
}

- (void)omitConnectionId;
- (void)omitResolvedVersion;
- (void)omitSdsResolvedVersion;
- (void)preserveConnectionId;
- (void)preserveResolvedVersion;
- (void)preserveSdsResolvedVersion;
- (void)replaceConnectionId:(unsigned int)a0;
- (void)replaceResolvedVersion:(id)a0;
- (void)replaceSdsResolvedVersion:(id)a0;

@end
