@interface _SDSSessionNextIncomingConnectionStreamNameChanges : NSObject {
    unsigned char _changeTypeName;
    unsigned int _replacementName;
}

- (void)preserveName;
- (void)replaceName:(id)a0;
- (void)omitName;

@end
