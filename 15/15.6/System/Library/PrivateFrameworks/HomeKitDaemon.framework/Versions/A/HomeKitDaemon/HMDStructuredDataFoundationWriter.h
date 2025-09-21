@class NSString, NSMutableArray;

@interface HMDStructuredDataFoundationWriter : HMDStructuredWriter {
    id _container;
    NSString *_currentKey;
    NSMutableArray *_stack;
    char _mutableContainers;
}

- (id)init;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)writeData:(id)a0;
- (void)endArray;
- (void)endDictionary;
- (void)writeString:(id)a0;
- (void)beginArrayOfSize:(unsigned long long)a0;
- (void)beginDictionaryOfSize:(unsigned long long)a0;
- (void)emitRootValue:(id)a0;
- (id)initWithMutableContainers:(char)a0;
- (void)writeBoolean:(char)a0;
- (void)writeDate:(id)a0;
- (void)writeDictionaryKey:(id)a0;
- (void)writeLogicalValue:(id)a0 validateAndCopy:(char)a1;
- (void)writeNull;
- (void)writeNumber:(id)a0;
- (void)writeUUID:(id)a0;

@end
