@class NSURL, NSXPCConnection, NSFileHandle;

@interface NSUserScriptTask : NSObject {
    NSURL *_scriptURL;
    NSXPCConnection *_connection;
    BOOL _hasExeced;
    BOOL _hasTerminated;
}

@property (retain) NSFileHandle *standardInput;
@property (retain) NSFileHandle *standardOutput;
@property (retain) NSFileHandle *standardError;
@property BOOL showsProgressInMenuBar;
@property BOOL showsProgressInMenuBar;
@property (readonly, copy) NSURL *scriptURL;

+ (BOOL)isValidScriptFile:(id)a0 error:(id *)a1;
+ (id)badFileError:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)executeWithCompletionHandler:(id /* block */)a0;
- (id)interpretErrorStatus:(int)a0 withOutput:(id)a1;
- (void)executeWithInterpreter:(id)a0 arguments:(id)a1 :(id /* block */)a2;

@end
