@interface _SDSDataLayoutChanges : NSObject {
    unsigned char _changeTypeNestedName;
    unsigned int _replacementNestedName;
    unsigned char _changeTypeSize;
    unsigned long long _replacementSize;
    unsigned char _changeTypeFields;
    unsigned int _replacementFields;
}

- (void)preserveFields;
- (void)omitFields;
- (void)omitNestedName;
- (void)omitSize;
- (void)preserveNestedName;
- (void)preserveSize;
- (void)replaceFields:(id)a0;
- (void)replaceNestedName:(id)a0;
- (void)replaceSize:(unsigned long long)a0;

@end
