@class NSString;

@interface NSAppleScript : NSObject <NSCopying> {
    NSString *_source;
    unsigned int _compiledScriptID;
    void *_reserved1;
    void *_reserved2;
}

@property (readonly, copy) NSString *source;
@property (readonly, getter=isCompiled) BOOL compiled;

+ (struct ComponentInstanceRecord { long long x0[1]; } *)_defaultScriptingComponent;
+ (id)_infoForOSAError:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)_initWithScriptIDNoCopy:(unsigned int)a0;
- (id)_initWithContentsOfFile:(id)a0 error:(id *)a1;
- (id)_initWithData:(id)a0 error:(id *)a1;
- (id)initWithSource:(id)a0;
- (id)_executeWithMode:(int)a0 andReturnError:(id *)a1;
- (id)_executeAppleEvent:(id)a0 withMode:(int)a1 error:(id *)a2;
- (BOOL)compileAndReturnError:(id *)a0;
- (id)executeAndReturnError:(id *)a0;
- (id)executeAppleEvent:(id)a0 error:(id *)a1;
- (unsigned int)_compiledScriptID;

@end
