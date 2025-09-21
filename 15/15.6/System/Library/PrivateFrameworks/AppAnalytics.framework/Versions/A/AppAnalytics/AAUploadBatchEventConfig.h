@class NSURL;

@interface AAUploadBatchEventConfig : NSObject {
    void /* unknown type, empty encoding */ directory;
}

@property (class, nonatomic, readonly) AAUploadBatchEventConfig *default;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxEventsPerSessionBatch;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxByteSizePerSessionBatch;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ transparencyLoggingEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ debuggingEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxUploadTries;
@property (nonatomic, readonly) NSURL *directory;

- (id)init;
- (void).cxx_destruct;
- (id)withMaxByteSizePerSessionBatch:(long long)a0;
- (id)withTransparencyLoggingEnabled:(char)a0;
- (id)initWithBatchSize:(long long)a0 enableDebugging:(char)a1;
- (id)withDebuggingEnabled:(char)a0;
- (id)withDirectory:(id)a0;
- (id)withMaxEventsPerSessionBatch:(long long)a0;
- (id)withMaxUploadTries:(long long)a0;

@end
