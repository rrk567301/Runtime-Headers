@class NSString, NSDateFormatter, PLAppleArchiveLoggerRecord;

@interface PLFileBackedLogger : NSObject {
    NSDateFormatter *_dateFormatter;
    PLAppleArchiveLoggerRecord *_lock_loggerRecord;
    BOOL _lock_closed;
}

@property char loggerType;
@property (retain) NSString *tag;
@property BOOL enableAutoFlush;

+ (id)setupWithLibraryIdentifier:(id)a0 type:(char)a1;
+ (id)_setupWithLibraryIdentifier:(id)a0 type:(char)a1 logURL:(id)a2;
+ (id)openLoggerAtURL:(id)a0 logRotate:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)flush;
- (BOOL)isClosed;
- (void)logWithMessage:(const char *)a0 fromCodeLocation:(struct { char *x0; int x1; })a1 type:(unsigned char)a2;
- (void)_inlock_flush;
- (int)fileRefCount;
- (id)initWithLogFileURL:(id)a0 logRotate:(BOOL)a1;

@end
