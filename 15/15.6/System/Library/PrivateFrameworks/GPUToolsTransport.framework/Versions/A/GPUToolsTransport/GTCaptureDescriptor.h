@class NSURL;

@interface GTCaptureDescriptor : GTCaptureRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned long long triggerHitsToStart;
@property (nonatomic) unsigned long long triggerHitsToEnd;
@property (nonatomic) char suspendAfterCapture;
@property (nonatomic) char ignoreUnusedResources;
@property (nonatomic) char includeBacktrace;
@property (nonatomic) unsigned long long streamRef;
@property (retain, nonatomic) NSURL *outputURL;
@property (nonatomic) char isToolsCapture;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestID:(unsigned long long)a0;

@end
