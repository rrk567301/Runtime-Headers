@class NSFileHandle, NSMutableArray, NSOutputStream;

@interface WBSJSONWriter : NSObject {
    NSMutableArray *_stateStack;
}

@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long currentDepth;
@property (readonly, nonatomic) long long currentEntryKind;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (id)initWithFileHandle:(id)a0;
- (char)finishEncodingWithError:(id *)a0;
- (id)_currentEntryStateOfKind:(long long)a0 error:(id *)a1;
- (char)_checkCurrentState:(id)a0 doesNotContainKey:(id)a1 error:(id *)a2;
- (char)_checkHasNoRootWithError:(id *)a0;
- (id)_dataForJSONObject:(id)a0 error:(id *)a1;
- (id)_prefixStringForCurrentDepth;
- (char)_writeBuffer:(const char *)a0 length:(long long)a1 error:(id *)a2;
- (char)_writeCommaIfNeededForState:(id)a0 error:(id *)a1;
- (char)_writeConstantASCIIString:(const char *)a0 error:(id *)a1;
- (char)_writeData:(id)a0 error:(id *)a1;
- (char)_writeObjectKey:(id)a0 error:(id *)a1;
- (char)_writePrettyPrintedData:(id)a0 forEntry:(id)a1 error:(id *)a2;
- (char)_writeString:(id)a0 error:(id *)a1;
- (char)addEntry:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)appendAndBeginArrayWithError:(id *)a0;
- (char)appendAndBeginObjectWithError:(id *)a0;
- (char)appendEntry:(id)a0 error:(id *)a1;
- (char)beginArrayForKey:(id)a0 error:(id *)a1;
- (char)beginArrayWithError:(id *)a0;
- (char)beginObjectForKey:(id)a0 error:(id *)a1;
- (char)beginObjectWithError:(id *)a0;
- (char)closeCurrentEntryWithError:(id *)a0;
- (id)initWithFileHandle:(id)a0 options:(unsigned long long)a1;
- (id)initWithOutputStream:(id)a0 options:(unsigned long long)a1;

@end
