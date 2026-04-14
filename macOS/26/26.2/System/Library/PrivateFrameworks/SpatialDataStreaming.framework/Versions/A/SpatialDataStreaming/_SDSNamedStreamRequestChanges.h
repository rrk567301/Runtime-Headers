@interface _SDSNamedStreamRequestChanges : NSObject {
    unsigned char _changeTypeConnectionId;
    unsigned int _replacementConnectionId;
    unsigned char _changeTypeName;
    unsigned int _replacementName;
    unsigned char _changeTypeDataLayoutList;
    unsigned int _replacementDataLayoutList;
    unsigned char _changeTypeMaxItemsPerMessage;
    unsigned int _replacementMaxItemsPerMessage;
}

- (void)preserveName;
- (void)replaceName:(id)a0;
- (void)omitConnectionId;
- (void)omitDataLayoutList;
- (void)omitMaxItemsPerMessage;
- (void)omitName;
- (void)preserveConnectionId;
- (void)preserveDataLayoutList;
- (void)preserveMaxItemsPerMessage;
- (void)replaceConnectionId:(unsigned int)a0;
- (void)replaceDataLayoutList:(id)a0;
- (void)replaceMaxItemsPerMessage:(unsigned int)a0;

@end
