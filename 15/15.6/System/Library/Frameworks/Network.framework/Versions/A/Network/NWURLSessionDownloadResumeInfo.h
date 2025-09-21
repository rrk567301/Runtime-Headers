@class NSHTTPURLResponse, NSString, NSDate, NSURLRequest, NWURLSessionResponseConsumerResumeInfo;

@interface NWURLSessionDownloadResumeInfo : NSObject <NSSecureCoding> {
    char _prefersIncrementalDelivery;
    char __keepDownloadTaskFile;
    float _priority;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSHTTPURLResponse *_response;
    NSDate *_earliestBeginDate;
    long long _countOfBytesClientExpectsToSend;
    long long _countOfBytesClientExpectsToReceive;
    NSString *_taskDescription;
    NWURLSessionResponseConsumerResumeInfo *_responseConsumerResumeInfo;
}

@property (class, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
