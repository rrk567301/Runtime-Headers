@interface _SDSDataLayoutItemInfoChanges : NSObject {
    unsigned char _changeTypeFieldName;
    unsigned int _replacementFieldName;
    unsigned char _changeTypeOffset;
    unsigned long long _replacementOffset;
    unsigned char _changeTypeOptions;
    unsigned int _replacementOptions;
}

- (void)replaceOffset:(unsigned long long)a0;
- (void)preserveOptions;
- (void)replaceOptions:(unsigned int)a0;
- (void)omitFieldName;
- (void)omitOffset;
- (void)omitOptions;
- (void)preserveFieldName;
- (void)preserveOffset;
- (void)replaceFieldName:(id)a0;

@end
