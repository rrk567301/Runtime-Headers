@class NSString, NSURL, NSData, NSURLRequest;

@interface __NSCFResumableUploadState : NSObject <NSSecureCoding> {
    char _retryCounter;
    char _repeatedStreamOpenings;
    char _userOverride;
    int _state;
    int _bodyType;
    long long _offset;
    NSURLRequest *_originalRequest;
    NSData *_uploadData;
    NSURL *_resumeURL;
    NSString *_draftVersion;
    long long _streamLength;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSURL *uploadFile;

+ (id)rusWithResumeData:(id)a0 originalRequest:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResumeDataForTaskInfo;
- (char)isResumable;

@end
