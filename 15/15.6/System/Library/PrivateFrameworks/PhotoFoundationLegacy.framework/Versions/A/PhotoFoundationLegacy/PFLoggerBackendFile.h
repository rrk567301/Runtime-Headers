@class NSDateFormatter, NSFileHandle;

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {
    NSDateFormatter *_dateFormatter;
}

@property (retain) NSFileHandle *fileHandle;
@property char shouldCloseFileHandle;
@property char isStandardErrorFileBackend;

+ (id)backendsFromUserDefaultsWithLogLevel:(int)a0;
+ (id)standardErrorFileBackend;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFileHandle:(id)a0;
- (id)initWithLogFileURL:(id)a0;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a6;
- (char)outputsToDebuggerConsole;
- (id)writeOpenFileAtURL:(id)a0;

@end
