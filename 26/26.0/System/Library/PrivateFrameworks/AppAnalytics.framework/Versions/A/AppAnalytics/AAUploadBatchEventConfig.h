@class NSURL;

@interface AAUploadBatchEventConfig : NSObject {
    void /* unknown type, empty encoding */ directory;
}

@property (class, nonatomic, readonly) AAUploadBatchEventConfig *default;

@property (nonatomic, readonly) long long maxEventsPerSessionBatch;
@property (nonatomic, readonly) long long maxByteSizePerSessionBatch;
@property (nonatomic, readonly) BOOL transparencyLoggingEnabled;
@property (nonatomic, readonly) BOOL debuggingEnabled;
@property (nonatomic, readonly) long long maxUploadTries;
@property (nonatomic, readonly) NSURL *directory;

- (id)withDebuggingEnabled:(BOOL)a0;
- (id)initWithBatchSize:(long long)a0 enableDebugging:(BOOL)a1;
- (id)withMaxUploadTries:(long long)a0;
- (id)init;
- (id)withDirectory:(id)a0;
- (id)withMaxByteSizePerSessionBatch:(long long)a0;
- (id)withMaxEventsPerSessionBatch:(long long)a0;
- (id)withTransparencyLoggingEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
