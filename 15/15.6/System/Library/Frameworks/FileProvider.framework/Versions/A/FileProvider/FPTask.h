@class NSArray, NSFileHandle;

@interface FPTask : NSObject

@property (retain, nonatomic) NSArray *argv;
@property (retain, nonatomic) NSFileHandle *standardOutput;
@property (retain, nonatomic) NSFileHandle *standardError;
@property (readonly, nonatomic) int waitStatus;

+ (id)sanitizeStringForFilename:(id)a0;
+ (id)taskWithCommand:(id)a0;
+ (id)taskWithCommandWithArguments:(id)a0;
+ (char)exec:(id)a0 error:(id *)a1;
+ (char)exec:(id)a0 stdoutString:(id *)a1 stderrString:(id *)a2 error:(id *)a3;
+ (id)simulatorRoot;
+ (id)taskWithArguments:(id)a0;
+ (id)taskWithRedirectedOutputAndCommand:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (int)exec;
- (void)resetRedirect;
- (void)setCommand:(id)a0;
- (void)setCommandWithArguments:(id)a0;
- (int)_prepareRedirections:(void **)a0;
- (int)execAsync;
- (const char **)newPreparedArgvArray;

@end
