@class WiFiSoftError, NSString, NSURL, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_source;

@interface WFLoggerFileWithTTL : WFLoggerBase {
    NSNumber *_ttlInHours;
    NSNumber *_rotationIntervalInHours;
    NSString *_logFilePath;
    NSObject<OS_dispatch_source> *_eventSource;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_filePtr;
    NSDate *_fileCreationDate;
    NSURL *_directoryURL;
    NSString *_fileNamePrefix;
    unsigned long long _maxFileSizeInBytes;
    unsigned long long _cleanupAgeInSeconds;
    unsigned long long _enabledLevel;
    struct __CFDateFormatter { } *_timestampFormatter;
}

@property (readonly, getter=getLogFilePath) NSString *logFilePath;
@property (readonly, getter=getLogDirURL) NSURL *logDirPath;
@property (readonly, getter=getLogFileNamePrefix) NSString *logFileNamePrefix;
@property (readonly, nonatomic) WiFiSoftError *softError;

- (void)setLogLevelEnable:(unsigned long long)a0;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 cfStrMsg:(struct __CFString { } *)a2;
- (void)stopWatchingLogFile;
- (void)setLogLifespanInDays:(id)a0;
- (unsigned long long)getLogPrivacy;
- (unsigned long long)getLogLevelPersist;
- (unsigned long long)getMaxFileSizeInMB;
- (id)getLogLifespanInDays;
- (void)setLogPrivacy:(unsigned long long)a0;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 message:(const char *)a2 valist:(char *)a3;
- (void)setLogLevelPersist:(unsigned long long)a0;
- (unsigned long long)getLogLevelEnable;
- (void)dealloc;
- (void)createNewLogFile;
- (void)cleanupOldFiles;
- (void)rotateToNewFile;
- (void)checkForRotation;
- (BOOL)createLogDirectoryIfNeeded;
- (struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)createPurgeableClassCFile:(id)a0;
- (id)initWithDirectoryPath:(id)a0 dirPath:(id)a1 fileNamePrefix:(id)a2 runLoopRef:(struct __CFRunLoop { } *)a3 runLoopMode:(struct __CFString { } *)a4 dateFormatter:(struct __CFDateFormatter { } *)a5 maxFileSizeInMB:(unsigned long long)a6 ttlInHours:(unsigned long long)a7 rotationIntervalInHours:(unsigned long long)a8 dispatchQueue:(id)a9;
- (double)parseTimestampFromFilename:(id)a0;
- (void)setMaxFileSizeInMB:(unsigned long long)a0;
- (unsigned char)shouldRotateFile;
- (void)startWatchingLogFile;
- (void)writeToFile:(unsigned long long)a0 cfStrMsg:(struct __CFString { } *)a1;

@end
