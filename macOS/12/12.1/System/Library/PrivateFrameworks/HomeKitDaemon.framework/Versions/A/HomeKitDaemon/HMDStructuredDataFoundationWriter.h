@class NSString, NSMutableArray;

@interface HMDStructuredDataFoundationWriter : HMDStructuredWriter {
    id *_output;
    id _container;
    NSString *_currentKey;
    NSMutableArray *_stack;
}

- (void).cxx_destruct;
- (id)error;
- (void)writeData:(id)a0;
- (void)endDictionary;
- (void)endArray;
- (void)writeString:(id)a0;
- (void)beginArrayOfSize:(unsigned long long)a0;
- (void)beginDictionaryOfSize:(unsigned long long)a0;
- (void)writeDictionaryKey:(id)a0;
- (void)writeNull;
- (void)writeBoolean:(BOOL)a0;
- (void)writeNumber:(id)a0;
- (void)writeDate:(id)a0;
- (void)writeUUID:(id)a0;

@end
