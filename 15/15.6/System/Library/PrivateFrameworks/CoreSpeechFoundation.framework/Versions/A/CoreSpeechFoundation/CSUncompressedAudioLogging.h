@class NSString, NSFileHandle, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CSUncompressedAudioLogging : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *audioId;
@property (retain, nonatomic) NSString *dictationInteractionId;
@property (retain, nonatomic) NSString *asrId;
@property (nonatomic) char isSamplingForDictation;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *task;
@property (retain, nonatomic) NSString *samplingDate;
@property (retain, nonatomic) NSString *samplingTimestamp;
@property (retain, nonatomic) NSString *samplingTimestampDetail;
@property (retain, nonatomic) NSString *samplingDirectory;
@property (retain, nonatomic) NSString *rpiSamplingDirectory;
@property (retain, nonatomic) NSString *audioFilePath;
@property (retain, nonatomic) NSString *rpiAudioFilePath;
@property (retain, nonatomic) NSString *plistFilePath;
@property (retain, nonatomic) NSString *rpiPlistFilePath;
@property (retain, nonatomic) NSFileHandle *audioFileHandle;
@property (retain, nonatomic) NSString *tmpDirectory;
@property (retain, nonatomic) NSString *tmpAudioFilePath;
@property (nonatomic) char isCancelled;
@property (nonatomic) char rpiEnabled;
@property (retain, nonatomic) NSDate *loggingDate;

+ (int)loggingFileProtectionClass;

- (void).cxx_destruct;
- (void)prepareLogging:(id /* block */)a0;
- (void)appendAudioData:(id)a0;
- (void)cancelAudioLogging;
- (void)endAudioWithCancellation:(char)a0 completion:(id /* block */)a1;
- (id)initWithRequestId:(id)a0 languageCode:(id)a1 task:(id)a2;
- (char)_setupFilePath:(id *)a0;
- (int)_createFileDescriptor:(id)a0 protectionClass:(int)a1;
- (char)_moveAudioLoggingToCollectionDirectory:(id *)a0;
- (char)_prepareFileForLogging:(id *)a0;
- (void)_removeTmpAudioFile;
- (char)_writePlistFile:(id *)a0;
- (id)getLoggingDate;
- (id)initWithDictationInteractionId:(id)a0 asrId:(id)a1 languageCode:(id)a2 task:(id)a3;
- (id)initWithDictationInteractionId:(id)a0 languageCode:(id)a1 task:(id)a2;
- (id)initWithRequestId:(id)a0 asrId:(id)a1 dictationInteractionId:(id)a2 languageCode:(id)a3 task:(id)a4 isSamplingForDictation:(char)a5;
- (id)initWithRequestId:(id)a0 asrId:(id)a1 dictationInteractionId:(id)a2 languageCode:(id)a3 task:(id)a4 isSamplingForDictation:(char)a5 rpiEnabled:(char)a6;
- (id)initWithRequestId:(id)a0 asrId:(id)a1 languageCode:(id)a2 task:(id)a3;
- (id)initWithRequestId:(id)a0 asrId:(id)a1 languageCode:(id)a2 task:(id)a3 rpiEnabled:(char)a4;
- (char)isRPISamplingEnabled;
- (id)samplingString;

@end
