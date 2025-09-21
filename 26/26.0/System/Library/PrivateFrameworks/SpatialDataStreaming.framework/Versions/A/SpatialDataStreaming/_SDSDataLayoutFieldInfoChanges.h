@interface _SDSDataLayoutFieldInfoChanges : NSObject {
    unsigned char _changeTypeSize;
    unsigned long long _replacementSize;
    unsigned char _changeTypeLayoutInfo;
    unsigned int _replacementLayoutInfo;
}

- (void)omitLayoutInfo;
- (void)omitSize;
- (void)preserveLayoutInfo;
- (void)preserveSize;
- (void)replaceLayoutInfo:(id)a0;
- (void)replaceSize:(unsigned long long)a0;

@end
