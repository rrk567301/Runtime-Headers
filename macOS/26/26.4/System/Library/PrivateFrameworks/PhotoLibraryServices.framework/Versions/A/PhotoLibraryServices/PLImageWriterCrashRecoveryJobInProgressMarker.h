@class PLImageWriter, NSString, NSDate;

@interface PLImageWriterCrashRecoveryJobInProgressMarker : NSObject {
    PLImageWriter *_imageWriter;
    int _counterValue;
    NSString *_identifier;
    NSDate *_date;
    unsigned long long _threadId;
}

- (void)stillAlive;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 imageWriter:(id)a1;

@end
