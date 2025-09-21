@class NSURL, NSXPCConnection, NSFileHandle;

@interface NSUserScriptTask : NSObject {
    NSURL *_scriptURL;
    NSXPCConnection *_connection;
    char _hasExeced;
    char _hasTerminated;
}

@property (retain) NSFileHandle *standardInput;
@property (retain) NSFileHandle *standardOutput;
@property (retain) NSFileHandle *standardError;
@property char showsProgressInMenuBar;
@property char showsProgressInMenuBar;
@property (readonly, copy) NSURL *scriptURL;

+ (id)badFileError:(id)a0;
+ (char)isValidScriptFile:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)executeWithCompletionHandler:(id /* block */)a0;
- (void)executeWithInterpreter:(id)a0 arguments:(id)a1 :(id /* block */)a2;
- (id)interpretErrorStatus:(int)a0 withOutput:(id)a1;

@end
