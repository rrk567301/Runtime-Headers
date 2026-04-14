@class NSString, NSFileHandle, NSObject;
@protocol OS_dispatch_queue;

@interface CSUncompressedAudioLogging : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *samplingDate;
@property (retain, nonatomic) NSString *samplingTimestamp;
@property (retain, nonatomic) NSString *samplingTimestampDetail;
@property (retain, nonatomic) NSString *samplingDirectory;
@property (retain, nonatomic) NSString *audioFilePath;
@property (retain, nonatomic) NSString *plistFilePath;
@property (retain, nonatomic) NSFileHandle *audioFileHandle;

- (void).cxx_destruct;
- (id)initWithRequestId:(id)a0 languageCode:(id)a1;
- (void)prepareLogging;
- (void)endAudio;
- (void)appendAudioData:(id)a0;
- (BOOL)_prepareFileForLogging;
- (BOOL)_setupFilePath;
- (int)_createFileDescriptor:(id)a0 protectionClass:(int)a1;
- (void)_writePlistFile;

@end
