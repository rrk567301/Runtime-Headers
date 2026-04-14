@interface _SDSNamedStreamResponseChanges : NSObject {
    unsigned char _changeTypeConnectionId;
    unsigned int _replacementConnectionId;
    unsigned char _changeTypeName;
    unsigned int _replacementName;
    unsigned char _changeTypeDataLayoutList;
    unsigned int _replacementDataLayoutList;
    unsigned char _changeTypeResolvedDataLayout;
    unsigned int _replacementResolvedDataLayout;
    unsigned char _changeTypeMaxItemsPerMessage;
    unsigned int _replacementMaxItemsPerMessage;
}

- (void)preserveName;
- (void)replaceName:(id)a0;
- (void)omitConnectionId;
- (void)omitDataLayoutList;
- (void)omitMaxItemsPerMessage;
- (void)omitName;
- (void)omitResolvedDataLayout;
- (void)preserveConnectionId;
- (void)preserveDataLayoutList;
- (void)preserveMaxItemsPerMessage;
- (void)preserveResolvedDataLayout;
- (void)replaceConnectionId:(unsigned int)a0;
- (void)replaceDataLayoutList:(id)a0;
- (void)replaceMaxItemsPerMessage:(unsigned int)a0;
- (void)replaceResolvedDataLayout:(id)a0;

@end
