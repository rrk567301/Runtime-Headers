@interface TTKTestCaseWriter : NSObject

+ (id)storeToFile:(id)a0 inputMode:(id)a1 layouts:(id)a2;
+ (id)storeToDir:(id)a0 inputMode:(id)a1 layouts:(id)a2 writeOnFlush:(BOOL)a3 maxTestCasesPerFile:(unsigned int)a4 maxFilesPerDirectory:(unsigned int)a5;

@end
