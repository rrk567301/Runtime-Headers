@class NSFileHandle;

@interface MEJSONExporter : NSObject {
    NSFileHandle *mOutputFile;
    long long mIndentLevel;
    long long mIndent;
}

@property (nonatomic) BOOL prettyPrint;
@property (nonatomic) BOOL isStandalone;

- (void)dealloc;
- (id)init;
- (BOOL)exportPropertyList:(id)a0 toPath:(id)a1;
- (void)_appendString:(id)a0;
- (void)_appendNewline;
- (void)_exportDictionary:(id)a0;
- (void)_exportArray:(id)a0;
- (void)_appendIndent;
- (void)_exportValue:(id)a0;

@end
