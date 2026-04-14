@class SPScriptScanner;

@interface InterpreterSecurity : NSObject {
    unsigned long long _interpreterType;
    SPScriptScanner *_spScanner;
}

+ (id)createForInterpreter:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWith:(unsigned long long)a0;
- (BOOL)scanURL:(id)a0;
- (BOOL)scanData:(id)a0 withSourceURL:(id)a1;

@end
